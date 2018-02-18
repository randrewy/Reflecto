#include <iostream>
#include <string>

#define REFLECTO_UNSAFE_BUT_USABLE
#include "reflecto.h"


template<size_t Level, size_t Index, typename Type, typename = void>
struct can_ostream : std::false_type {};
template<size_t Level, size_t Index, typename Type>
struct can_ostream<Level, Index, Type, std::void_t<decltype(std::cout << std::declval<Type>())>> : std::true_type {};

template<size_t Level, size_t Index, typename Type>
struct ActionOstreamOrFlat {
    static const reflecto::VisitAction value = can_ostream<Level, Index, Type>::value
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
    Test t;
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

struct Test3 {
    int i = 0;
    Test2 t2;
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


int main()
{
    test_simple();
    test_flatten();
    test_pretty_print();
    return 0;
}
