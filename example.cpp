#include <iostream>
#include <string>

#define REFLECTO_UNSAFE_BUT_USABLE
//#define REFLECTO_SUPPORT_BITFIELDS
#include "reflecto.h"


template<typename Type, typename = void>
struct can_ostream : std::false_type {};
template<typename Type>
struct can_ostream<Type, std::void_t<decltype(std::cout << std::declval<Type>())>> : std::true_type {};

template<size_t Level, size_t Index, typename Type>
struct ActionOstreamOrFlat {
    static const reflecto::VisitAction value = can_ostream<Type>::value
            ? reflecto::VisitAction::Call
            : reflecto::VisitAction::Flat;
};

struct TestSimple {
    int i = 123;
    double j = 1.23;
};

void test_simple() {
    std::cout << "\ntest_simple:\n";

    TestSimple ts;
    const TestSimple cts;

    auto view1 = reflecto::get_view(ts);
    auto view2 = reflecto::get_view(cts);

    std::cout << std::get<0>(view1) << " " << std::get<1>(view1) << "\n";
    std::cout << std::get<0>(view2) << " " << std::get<1>(view2) << "\n";

    reflecto::for_each_member(ts, [](auto&& v) { ++v; std::cout << v << " ";});
    std::cout << "\n";

    reflecto::for_each_member(cts, [](auto&& v) { std::cout << v << " ";});
    std::cout << "\n";
}

struct Test {
    int i = 123;
    double d = 1.23;
    std::string s = "string";
};


struct Test2 {
    int i = 123;
    double d = 1.23;
    Test t {};
    float f = -1.23f;
};

void test_flatten() {
    std::cout << "\ntest_flatten:\n";

    Test2 t;

    reflecto::for_each_member(t, [](auto&& v) { std::cout << sizeof(v) << "() ";});
    std::cout << "\n";

    reflecto::for_each_member_flatten<ActionOstreamOrFlat>(
                t,
                [](auto&& v) { std::cout << sizeof(v) << "(" << v << ") ";}
    );
    std::cout << "\n";
}

struct Test4 {
    int i;
    int& ri;
};

void test_reference() {
    std::cout << "\ntest_reference:\n";

    int value = 42;

    Test4 t { -3, value};

    auto view = reflecto::get_view(t);
    std::cout << std::get<0>(view) << " " << std::get<1>(view) << "\n";
    reflecto::for_each_member(t, [](auto&& v) { std::cout << v << " ";});

    std::cout << "\n";

    std::get<1>(view)++;
    std::cout << std::get<0>(view) << " " << std::get<1>(view) << "\n";
    reflecto::for_each_member(t, [](auto&& v) { std::cout << v << " ";});
    std::cout << "\n";
}

struct Test3 {
    int i = 0;
    Test2 t2 {};
    double d = 0;
};

void test_pretty_print() {
    std::cout << "\ntest_pretty_print:\n";

    Test3 t;
    std::string indent = "\t";
    std::cout << "Test3 {\n";
    reflecto::for_each_member_flatten<ActionOstreamOrFlat>(
                t,
                [&indent](size_t level, size_t index, auto&& v) {
                    std::cout << indent << level << '.' << index << ": " << v << "\n";
                },
                [&indent](size_t level, size_t index) {
                    std::cout << indent << level << '.' << index << ": {\n";
                    indent.push_back('\t');
                },
                [&indent](size_t, size_t) {
                    indent.pop_back();
                    std::cout << indent << "}\n";
                }
    );
    std::cout << "}\n";
}


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
                // call this if Action is Call. you can add extra arguments `size_t level, size_t index` before `auto&& v`
                [](auto&& v) {
                    std::cout << v << " ";
                }
                // add void (size_t level, size_t index) callback on each flattening action
                // add void (size_t level, size_t index) callback when we pop from inside of most inner struct
    );
}


#if defined(REFLECTO_SUPPORT_BITFIELDS)
struct WithFields {
    unsigned int i1 : 1;
    unsigned int i2 : 1;
    unsigned int i3 : 1;
    unsigned int i4 : 1;
    unsigned int i5 : 1;
    unsigned int i6 : 1;
    unsigned int i7 : 1;
    unsigned int i8 : 1;
    unsigned int i9 : 1;
};

void test_bitfields() {
    std::cout << "\ntest_bitfields:\n";
    std::cout << sizeof (WithFields) << " " << reflecto::details::count_members<WithFields>() << "\n";

    WithFields wf;

    wf.i7 = 1;

    std::cout << wf.i1 << wf.i2 << wf.i3 << wf.i4 <<  wf.i5 << wf.i6 << wf.i7 << wf.i8 << wf.i9 << "\n" ;
    reflecto::for_each_member(wf, [](auto&& v) { std::cout << v;});
    std::cout << "\n";
}

#endif


int main()
{
    test_simple();
    test_flatten();
    test_reference();
    test_pretty_print();

    std::cout << "example()\n";
    example();

    #if defined(REFLECTO_SUPPORT_BITFIELDS)
    test_bitfields();
    #endif

    return 0;
}
