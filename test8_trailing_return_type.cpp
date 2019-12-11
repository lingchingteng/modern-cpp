#include <iostream>

template<typename R, typename T, typename U>
R add(T x, U y) {
    return x + y;
}

template<typename T, typename U>
auto add2(T x, U y) -> decltype(x+y){
    return x + y;
}

template<typename T, typename U>
auto add3(T x, U y){
    return x + y;
}

int main() {

    int a = add<int, int>(1, 2);
    if (std::is_same<decltype(a), double>::value) {
        std::cout << "a is double: " << std::endl;
    }
    if (std::is_same<decltype(a), int>::value) {
        std::cout << "a is int: " << std::endl;
    }
    std::cout << a << std::endl;

    // after c++11
    auto w = add2<int, double>(1, 2.0);
    if (std::is_same<decltype(w), double>::value) {
        std::cout << "w is double: " << std::endl;
    }
    std::cout << w << std::endl;

    // after c++14
    auto q = add3<double, int>(1.0, 2);
    if (std::is_same<decltype(w), double>::value) {
        std::cout << "q is double: " << std::endl;
    }
    std::cout << "q: " << q << std::endl;

    return 0;
}