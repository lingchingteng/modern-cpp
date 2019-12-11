#include <iostream>

std::string lookup1() {
    std::string a = "lookup1";
    return a;
}

std::string& lookup2() {
    std::string a = "lookup2";
    return a;
}

decltype(auto) look_up_a_string_1() {
    return lookup1();
}
decltype(auto) look_up_a_string_2() {
    return lookup2();
}

int main() {

    std::cout << look_up_a_string_1() << std::endl;
    std::cout << look_up_a_string_2() << std::endl;

    return 0;
}