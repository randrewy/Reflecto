#ifndef REFLECTO_H
#define REFLECTO_H
#include <tuple>
#include <functional>

namespace reflecto {
    enum class VisitAction { Call, Flat, Skip };

    template<size_t Level, size_t Index, typename Type>
    struct FlatIfNotTrivial {
        constexpr static const VisitAction value = std::is_trivial_v<std::decay_t<Type>>
            ? VisitAction::Call
            : VisitAction::Flat;
    };

    // only l-values
    template<typename T>
    constexpr auto get_view(T& t);

    template<typename T, typename Function>
    constexpr void for_each_member(T&& t, Function&& f);

    template<template<size_t, size_t, typename, typename...> typename FlatIf, typename T, typename Function, typename FlatStart, typename FlatEnd>
    constexpr void for_each_member_flatten(T&& t, Function&& f, FlatStart&& fs, FlatEnd&& fe);

    template<template<size_t, size_t, typename, typename...> typename FlatIf, typename T, typename Function>
    constexpr void for_each_member_flatten(T&& t, Function&& f);

    template<template<size_t, size_t, typename, typename...> typename FlatIf, typename T, typename Function, typename FlatStart, typename FlatEnd>
    constexpr void for_each_member_flatten_silent(T&& t, Function&& f, FlatStart&& fs, FlatEnd&& fe);

    template<template<size_t, size_t, typename, typename...> typename FlatIf, typename T, typename Function>
    constexpr void for_each_member_flatten_silent(T&& t, Function&& f);

} // namespace reflecto


namespace reflecto::functional {

    template<bool Const, typename T>
    decltype(auto) ref(const T& t) {
        if constexpr (Const) {
            return std::cref(t);
        } else {
            return std::ref(const_cast<T&>(t));
        }
    }
} // namespace reflecto::functional


namespace reflecto::generated {
    struct Nill{};
    #define CONSTEXPR_STRUCTURED /* structured binding are not constexpr yet*/
    #include "generated.hxx"
} // namespace reflecto::generated


namespace reflecto::details {

    template<typename...>
    struct PrintType;

    template<size_t Index>
    struct Any {
        template<typename T>
        constexpr operator T&();
    };

    inline constexpr void do_nothing_callback(size_t level, size_t index) { (void)(level); (void)(index); }


    template<typename T, size_t... I>
    constexpr auto try_create_with_any(const std::index_sequence<I...>) -> decltype(T {Any<I>{}...});

    template <typename T, size_t N, typename = void>
    struct try_create : std::false_type {};

    template <typename T, size_t N>
    struct try_create<T, N, std::void_t<decltype (try_create_with_any<T>(std::make_index_sequence<N>{}))>> : std::true_type {};


    template<typename T, size_t N = sizeof(T)>
    constexpr size_t count_members() {
        if constexpr (!std::is_aggregate_v<T>) {
            return 0;
        } else if constexpr (reflecto::details::try_create<T, N>{}) {
            return N;
        } else {
            return count_members<T, N - 1>(); // binary search here?
        }
    }


    // const object tuple_size SFINAE issues workaround.
    // constness is passed in Const parameter and object is passed as mutable
    template<bool Const, typename T>
    constexpr auto get_view(const T& t) {
        return generated::as_tuple<Const>(const_cast<T&>(t), std::integral_constant<size_t, count_members<T>()>{});
    }


    template <std::size_t... I, typename Tuple, typename Function>
    constexpr void for_each_unwrap_seq(std::index_sequence<I...>, Tuple&& t, Function&& f) {
        (f(std::get<I>(std::forward<Tuple>(t))), ...);
    }

    template <typename Tuple, typename Function>
    constexpr void for_each(Tuple&& t, Function&& f) {
        for_each_unwrap_seq(std::make_index_sequence<std::tuple_size_v<std::decay_t<Tuple>>>{}, std::forward<Tuple>(t), std::forward<Function>(f));
    }

    template<typename Function, typename ArgumentType>
    void call_on_member(size_t level, size_t index, ArgumentType&& arg, Function&& function) {
        if constexpr (std::is_invocable_v<Function, size_t, size_t, ArgumentType>) {
            function(level, index, std::forward<ArgumentType>(arg));
        } else if constexpr (std::is_invocable_v<Function, ArgumentType>) {
            (void)(index), (void)(level);
            function(std::forward<ArgumentType>(arg));
        } else {
            static_assert(sizeof(Function) < 0, "Traverce function callback signature should be `void (size_t, size_t, T&&)` or `void (T&&)`");
        }
    }


    template <size_t Level, size_t Index, template<size_t, size_t, typename, typename...> typename Action, bool Silent, typename Tuple, typename Function, typename FlatStart, typename FlatEnd>
    constexpr void for_each_flatten(Tuple&& tuple, Function&& function, FlatStart&& flatStart, FlatEnd&& flatEnd) {
        if constexpr (Index < std::tuple_size_v<Tuple>) {
            using ArgumentType = std::tuple_element_t<Index, Tuple>;

            if constexpr (Action<Level, Index, ArgumentType>::value == VisitAction::Flat && std::is_aggregate_v<std::decay_t<ArgumentType>>) {
                flatStart(Level, Index);
                for_each_flatten<Level + 1, 0, Action, Silent>(
                            get_view<std::is_const_v<ArgumentType>>(
                                std::get<Index>(
                                    std::forward<Tuple>(tuple)
                                )
                            ),
                            std::forward<Function>(function),
                            std::forward<FlatStart>(flatStart),
                            std::forward<FlatEnd>(flatEnd)
                );
                flatEnd(Level, Index);
                for_each_flatten<Level, Index + 1, Action, Silent>(
                            std::forward<Tuple>(tuple),
                            std::forward<Function>(function),
                            std::forward<FlatStart>(flatStart),
                            std::forward<FlatEnd>(flatEnd)
                );
            } else if constexpr (Action<Level, Index, ArgumentType>::value == VisitAction::Call) {
                call_on_member(Level, Index, std::forward<ArgumentType>(std::get<Index>(std::forward<Tuple>(tuple))), std::forward<Function>(function));
                for_each_flatten<Level, Index + 1, Action, Silent>(
                            std::forward<Tuple>(tuple),
                            std::forward<Function>(function),
                            std::forward<FlatStart>(flatStart),
                            std::forward<FlatEnd>(flatEnd)
                );
            } else {
                if constexpr (Action<Level, Index, ArgumentType>::value != VisitAction::Skip && !Silent) {
                    PrintType<std::decay_t<ArgumentType>>{};
                    static_assert(std::is_aggregate_v<std::decay_t<ArgumentType>>, "Neither unpack, nor call can be performed on class member");
                }
            }
        }
    }

}  // namespace reflecto::details


namespace reflecto {

    template<typename Type>
    constexpr auto get_view(Type& t) {
        static_assert(std::is_aggregate_v<std::decay_t<Type>>, "Cannot get view of non-aggregate type or an array");
        if constexpr (std::is_aggregate_v<std::decay_t<Type>>) {
            return details::get_view<std::is_const_v<Type>>(t);
        } else {
            return generated::Nill{};
        }
    }

    template <typename Type, typename Function>
    constexpr void for_each_member(Type&& t, Function&& f) {
        static_assert(std::is_aggregate_v<std::decay_t<Type>>, "Cannot iterate over non-aggregate type or an array");
        if constexpr (std::is_aggregate_v<std::decay_t<Type>>) {
            details::for_each(get_view(t), std::forward<Function>(f));
        }
    }

    template<template<size_t, size_t, typename, typename...> typename Action, typename Type, typename Function, typename FlatStart, typename FlatEnd>
    constexpr void for_each_member_flatten(Type&& t, Function&& f, FlatStart&& fs, FlatEnd&& fe) {
        static_assert(std::is_aggregate_v<std::decay_t<Type>>, "Cannot iterate over non-aggregate type or an array");
        if constexpr (std::is_aggregate_v<std::decay_t<Type>>) {
            details::for_each_flatten<0, 0, Action, false>(get_view(t), std::forward<Function>(f), std::forward<FlatStart>(fs), std::forward<FlatEnd>(fe));
        }
    }

    template<template<size_t, size_t, typename, typename...> typename Action, typename Type, typename Function>
    constexpr void for_each_member_flatten(Type&& t, Function&& f) {
        for_each_member_flatten<Action>(std::forward<Type>(t), std::forward<Function>(f), details::do_nothing_callback, details::do_nothing_callback);
    }

    template<template<size_t, size_t, typename, typename...> typename Action, typename Type, typename Function, typename FlatStart, typename FlatEnd>
    constexpr void for_each_member_flatten_silent(Type&& t, Function&& f, FlatStart&& fs, FlatEnd&& fe) {
        static_assert(std::is_aggregate_v<std::decay_t<Type>>, "Cannot iterate over non-aggregate type or an array");
        if constexpr (std::is_aggregate_v<std::decay_t<Type>>) {
            details::for_each_flatten<0, 0, Action, true>(get_view(t), std::forward<Function>(f), std::forward<FlatStart>(fs), std::forward<FlatEnd>(fe));
        }
    }

    template<template<size_t, size_t, typename, typename...> typename Action, typename Type, typename Function>
    constexpr void for_each_member_flatten_silent(Type&& t, Function&& f) {
        for_each_member_flatten_silent<Action>(std::forward<Type>(t), std::forward<Function>(f), details::do_nothing_callback, details::do_nothing_callback);
    }

} // namespace reflecto


#endif // REFLECTO_H