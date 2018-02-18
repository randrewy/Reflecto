# Reflecto
Reflecto is header-only `c++17` library that provides access to aggregate struct members via tuple-like interface or in a for_each way. 
Original idea was taken from [here](https://github.com/apolukhin/magic_get). Don't forget to take a look on that awesome lib that only requires `c++14`! 

### Features and limitations
  - Requires c++17 support
  - Works only with aggregate types
  - Arrays are treated as not-an-aggregate
  - Bitfields reflection is optionally supported
  - Works with gcc/clang/mvsc (with some limitations)

## Example
```c++
// SFINAE helper to decide if type can be output in ostream (cout)
template<size_t Level, size_t Index, typename Type, typename = void>
struct can_ostream : std::false_type {};
template<size_t Level, size_t Index, typename Type>
struct can_ostream<Level, Index, Type, std::void_t<decltype(std::cout << std::declval<Type>())>>
    : std::true_type {};

// Used in flattening traverser. Will be instantiated for each member in structure with its 
// `level` `index` and `type`. Static value member is Action {Call/Flat/Skip } that should
// be done with the member depending on the parameters.
// Here we flatten struct members untill we can print them
template<size_t Level, size_t Index, typename Type>
struct ActionOstreamOrFlat {
    static const reflecto::VisitAction value = can_ostream<Level, Index, Type>::value
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

#### About MVSC
MVSC lacks `std::is_aggregate` trait, making it impossible to ckeck if struct flattening is possible. You can use the library though without that checks. Define `REFLECTO_UNSAFE_BUT_USABLE` before you include the header. Remember to be **extremely careful** if you do that

#### About bitfields
Bitfiled reflection support is disabled by default. Though you won't get any errors if you try to reflect a struct with bitfields as I don't know a way to detect if there are any. In some cases that will work. The reason it is disabled is extremely big template recursion even on small types.
To use this feature define `REFLECTO_SUPPORT_BITFIELDS` before you include `reflecto` and it's almost sure you'll need to increase template recursion limit with compiler flags.

#### About generator
`generate.py` is used to generate bolierplate structured binding code. Maximum 63 members is a default value. Feel free to regenerate `generated.hxx` if you need more. Use `generate.py <max_members: int>`
