#include <iostream>

template <typename T, typename P>
auto maxOf(T a, P b)
{
    return (a > b) ? a : b;
}

int main()
{

    auto result_i = maxOf(22.7, 56);
    std::cout << "maximum value we got " << result_i << std::endl;
    std::cout << "size of return result " << sizeof(result_i) << std::endl;
    return 0;
}