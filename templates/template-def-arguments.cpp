#include <iostream>

template <typename R = double, typename T, typename P>
R maxOf(T a, P b);

template <typename T, typename P, typename R = double>
R minOf(T a, P b);

int main()
{
    int ia{67};
    double cb{90.5};

    std::cout << "return value " << maxOf(ia, cb) << std::endl;

    std::cout << "return value " << maxOf<int>(ia, cb) << std::endl;

    std::cout << "return value " << minOf<int>(ia, cb) << std::endl;

    std::cout << "return value " << minOf<int, double>(ia, cb) << std::endl;

    std::cout << "return value " << minOf<int, double, double>(ia, cb) << std::endl;

    return 0;
}

template <typename R = double, typename T, typename P>
R maxOf(T a, P b)
{
    return ((a > b) ? a : b);
}

template <typename T, typename P, typename R = float>
R minOf(T a, P b)
{
    return ((a < b) ? a : b);
}