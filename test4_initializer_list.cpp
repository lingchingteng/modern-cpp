#include <iostream>
#include <vector>
#include <initializer_list>
#include <vector>

class MagicFoo {
public:
    std::vector<int> vec;

    MagicFoo(std::initializer_list<int> list) {
        for (std::initializer_list<int>::iterator it = list.begin();
             it != list.end(); ++it)
            vec.push_back(*it);
    }

    void foo(std::initializer_list<int> list) {
        for (std::initializer_list<int>::iterator it = list.begin(); it != list.end(); ++it)
            vec.push_back(*it);
    }
};

class Foo {
public:
    int value_a;
    int value_b;
    Foo(int a, int b) : value_a(a), value_b(b) {}
};

int main() {
    // before C++11
    int arr[3] = {1, 2, 3};
    Foo foo(1, 2);
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "arr[0]: " << arr[0] << std::endl;
    std::cout << "foo:" << foo.value_a << ", " << foo.value_b << std::endl;
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << std::endl;
    }

    // after C++11
    MagicFoo magicFoo = {1, 2, 3, 4, 5};

    std::cout << "magicFoo: " << std::endl;
    for (std::vector<int>::iterator it = magicFoo.vec.begin(); it != magicFoo.vec.end(); ++it)
        std::cout << *it << std::endl;

    magicFoo.foo({6,7,8,9});

    std::cout << "magicFoo: " << std::endl;
    for (std::vector<int>::iterator it = magicFoo.vec.begin(); it != magicFoo.vec.end(); ++it)
        std::cout << *it << std::endl;

    Foo foo2 {3, 4};
    std::cout << "foo:" << foo2.value_a << ", " << foo2.value_b << std::endl;

    return 0;
}
