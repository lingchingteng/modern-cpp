#include <iostream>
#include <type_traits>

void foo(char *);
void foo(int);

int main() {
    // 以下三個 if 都不會印出來，因為在 C++ 11 把 NULL 跟 0 還有 (void *)0 分開了。
    // 為了要處理這種 NULL 被傳統的 C++ compiler 弄成 0 或是 (void *)0 的問題，
    // 提出了一個新的 nullptr 的常量。
    if (std::is_same<decltype(NULL), decltype(0)>::value)
        std::cout << "NULL == 0" << std::endl;
    if (std::is_same<decltype(NULL), decltype((void*)0)>::value)
        std::cout << "NULL == (void *)0" << std::endl;
    if (std::is_same<decltype(NULL), std::nullptr_t>::value)
        std::cout << "NULL == nullptr" << std::endl;

    foo(0);          // 调用 foo(int)
    // foo(NULL);    // 该行不能通过编译
    // 上面是 overload 的問題，用 NULL (被轉成 0 或是 (void*)0) 會不知道要底要呼叫哪一個 function
    foo(nullptr);    // 调用 foo(char*)
    return 0;
}

void foo(char *) {
    std::cout << "foo(char*) is called" << std::endl;
}
void foo(int i) {
    std::cout << "foo(int) is called" << std::endl;
}
