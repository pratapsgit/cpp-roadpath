#include <iostream>

template <typename R, typename T, typename P>
R maxOf(T a, P b)
{
    std::cout << "template <typename R, typename T, typename P>" << std::endl;
    return ((a > b) ? a : b);
}

template <typename T, typename R, typename P>
R maxOf(T a, P b)
{
    std::cout << "template <typename T, typename R, typename P>" << std::endl;
    return ((a > b) ? a : b);
}

template <typename T, typename P, typename R>
R maxOf(T a, P b)
{
    std::cout << "template <typename T, typename P, typename R>" << std::endl;
    return ((a > b) ? a : b);
}

int main()
{

    // Test for template <typename R, typename T, typename P>
    auto result = maxOf<int, char, long>('c', 50L);
    std::cout << "result " << result << std::endl;
    result = maxOf<int, char>('c', 50L);
    std::cout << "result " << result << std::endl;
    result = maxOf<int>('c', 50L);
    std::cout << "result " << result << std::endl;
    // result = maxOf('c', 50L); // going to fail

    // Test for template <typename T, typename R, typename P>
    result = maxOf<char, int, long>('c', 50L);
    std::cout << "result " << result << std::endl;
    result = maxOf<char, int>('c', 50L);
    std::cout << "result " << result << std::endl;
    result = maxOf<char>('c', 50L); // going to pick a different template definition
    std::cout << "result " << result << std::endl;
    // result = maxOf('c', 50L); // going to fail

    // Test for template <typename T, typename P, typename R>
    result = maxOf<char, long, int>('c', 50L);
    std::cout << "result " << result << std::endl;
    result = maxOf<char, int>('c', 50L); // going to pick a different template definition
    std::cout << "result " << result << std::endl;
    result = maxOf<char>('c', 50L); // going to pick a different template definition
    std::cout << "result " << result << std::endl;
    // result = maxOf('c', 50L); // going to fail

    return 0;
}