# Reflecto
Reflecto is header-only `c++17` library that provides access to aggregate struct members via tuple-like interface or in a for_each way. 
Original idea was taken from [here](https://github.com/apolukhin/magic_get). Don't forget to take a look on that awesome lib that only requires `c++14`! 

### Features and limitations
  - Requires c++17 support
  - Works only with **baseless** aggregate types
  - Arrays are treated as not-an-aggregate
  - Bitfields reflection is optionally supported
  - Works with gcc/clang/mvsc (with some limitations)

### Interface:
1. Get the tuple of references to argument memebers:
```c++
reflecto::get_view(arg)   // direct members
reflecto::flat_view(arg)  // flatten structure
```
2. Iterate over all members and call specified callback function for each:
```c++
reflecto::for_each_member(arg, callback)
```
3. Iterate over all members and process each depending on `Action::value`:
```c++
reflecto::for_each_member_flatten(arg, callback, start_callback, end_callback)
reflecto::for_each_member_flatten<Action>(arg, callback, start_callback, end_callback)
```
Default _Action_ is to flatten if possible, if you want different behaviour specify custom template:
```c++
template<size_t Level, size_t Index, typename Type> struct Action{/*...*/}
```
It will be instantiated for each member with nested `Level` value, `Index` of member on current level, and it's `Type`. Member `VisitAction value` controls the execution:
  - `VisitAction::Call`: call specified callback on member
  - `VisitAction::Flat`: recursively calls `for_each_member_flatten` on member
  - `VisitAction::Skip`: do nothing
  
`callback` is called on members. Signature should be either `callback(T& arg)` or `callback(size_t level, size_t index, T& arg)`

`start_callback, end_callback` are optional. Called when recursive flatten starts/ends with `level, index` args.

If neither reflect, nor call can be performed on class member function will assert if `Action::value != VisitAction::Skip`. To silently skip such errors use `for_each_member_flatten_silent` function.

## Example
```c++
// SFINAE helper to decide if type can be output in ostream (cout)
template<typename Type, typename = void>
struct can_ostream : std::false_type {};
template<typename Type>
struct can_ostream<Type, std::void_t<decltype(std::cout << std::declval<Type>())>>
    : std::true_type {};

// Used in flattening traverser. Will be instantiated for each member in structure with its 
// `level` `index` and `type`. Static value member is Action {Call/Flat/Skip } that should
// be done with the member depending on the parameters.
// Here we flatten struct members untill we can print them
template<size_t Level, size_t Index, typename Type>
struct ActionOstreamOrFlat {
    static const reflecto::VisitAction value = can_ostream<Type>::value
            ? reflecto::VisitAction::Call
            : reflecto::VisitAction::Flat;
};

struct Inner {
    std::string s = "str";
};

struct Struct {
    int i = 1;
    double j = 2.0;
    Inner inner {};
};
void example() {
    Struct test;

    // create a tuple of references to members (first layer only)
    auto view = reflecto::get_view(test);
    std::cout << std::get<0>(view) << " " << std::get<1>(view) << " "
              << std::get<2>(view).s << "\n"; // note .s here. Inner cannot be put into `cout` directly

    // call function for each member (first layer only)
    reflecto::for_each_member(test, [](auto&& v) { std::cout << sizeof(v) << " ";});
    std::cout << "\n";

    //
    reflecto::for_each_member_flatten<ActionOstreamOrFlat>(
                // what struct to traverce
                test,
                // call this if Action value is `Call`
                // you can add extra arguments `size_t level, size_t index` before `auto&& v`
                [](auto&& v) {
                    std::cout << v << " ";
                }
                // add void (size_t level, size_t index) callback on each flattening action
                // add void (size_t level, size_t index) callback when we pop from inside of
                //                                       most inner struct
    );
}
```

## Installation
Not needed. Place headers where you want and `include "reflecto.h"`

#### About base classes
It's not possible to use the library with derived types. However, if some type has only empty bases, this 
can be bypassed by specializing a helper template class:
```c++
namespace reflecto {
    template<> struct CountBases<Derived> { constexpr static size_t value = 1; };
}
```

#### About MVSC
Older MVSC lacks `std::is_aggregate` trait, making it impossible to ckeck if struct flattening is possible. You can use the library though without that checks. Define `REFLECTO_UNSAFE_BUT_USABLE` before you include the header. Remember to be **extremely careful** if you do that

#### About bitfields
Bitfiled reflection support is disabled by default. Though you won't get any errors if you try to reflect a struct with bitfields as I don't know a way to detect if there are any. In some cases that will work. The reason it is disabled is extremely big template recursion even on small types.
To use this feature define `REFLECTO_SUPPORT_BITFIELDS` before you include `reflecto` and it's almost sure you'll need to increase template recursion limit with compiler flags.

#### About generator
Normally uou wouldn't have to use `generate.py` script that is used to generate internal bolierplate structured binding code. Maximum 63 members is a default value. Feel free to run `generated.hxx` if you need more. Use `generate.py <max_members: int>`
