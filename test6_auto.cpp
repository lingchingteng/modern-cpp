#include <initializer_list>
#include <vector>
#include <iostream>

class MagicFoo
{
    public:
        std::vector<int> vec;
        MagicFoo(std::initializer_list<int> list)
        {
            // 从 C++11 起, 使用 auto 关键字进行类型推导
            for (auto it = list.begin(); it != list.end(); ++it)
            {
                vec.push_back(*it);
            }
        }
};

// int add(auto x, auto y); // 這是不行的

int main()
{
    MagicFoo magicFoo = {1, 2, 3, 4, 5};

    std::cout << "magicFoo: ";

    for (auto it = magicFoo.vec.begin(); it != magicFoo.vec.end(); ++it)
    {
        std::cout << *it << ", ";
    }

    std::cout << std::endl;

    std::vector<int> vec = {1, 2, 3, 4, 5};

    // 在 C++11 之前
    // 由于 cbegin() 将返回 vector<int>::const_iterator
    // 所以 itr 也应该是 vector<int>::const_iterator 类型
    for (std::vector<int>::const_iterator it = vec.cbegin(); it != vec.cend(); ++it)
        std::cout << *it << ", ";

    std::cout << std::endl;

    auto i = 5;              // i 被推导为 int
    auto arr = new auto(10); // arr 被推导为 int *, 不是 vector 喔，也沒有初始化。

    std::cout << i << std::endl;

    for (auto it = arr; it != arr+10; ++it)
    {
        std::cout << *it << ", ";  // 會印出一些沒有初始化的內容。
    }

    std::cout << std::endl;

    // auto auto_arr2[10] = arr; // 這是不行的

    return 0;
}