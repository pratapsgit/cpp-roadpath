#include <iostream>

template <typename T, typename P>
auto maxOf(T a, P b) -> decltype((a > b) ? a : b);

int main()
{
    int ia{55};
    char cb{'d'};

    std::cout << "sizeof return value " << sizeof(decltype((ia > cb) ? ia : cb)) << std::endl;

    decltype((ia > cb) ? ia : cb) ic{78};
    std::cout << "ic is of size " << sizeof(ic) << std::endl;
    std::cout << "ic has value " << ic << std::endl;

    auto result_i = maxOf(ia, cb);
    std::cout << "result we got from maxOf " << result_i << std::endl;

    double de{56.34};
    auto result_d = maxOf(ia, de);
    std::cout << "result we got from maxOf " << result_d << std::endl;

    return 0;
}

template <typename T, typename P>
auto maxOf(T a, P b) -> decltype((a > b) ? a : b)
{
    return (a > b) ? a : b;
}
