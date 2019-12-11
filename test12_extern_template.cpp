#include <iostream>

template class std::vector<bool>; // 暫時編譯不過
extern template class std::vector<double>;

int main() {

    std::cout << "Hello, extern template!" << std::endl;

    return 0;
}