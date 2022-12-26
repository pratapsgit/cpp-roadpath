#include <iostream>
#include <cstring>

template <typename T>
T maxOf(T first, T second)
{
    std::cout << "template <typename T> T maxOf(T first, T second)" << std::endl;
    return ((first > second) ? first : second);
}

template <typename T>
T *maxOf(T *first, T *second)
{
    std::cout << "template <typename T> T* maxOf(T *first, T *second)" << std::endl;
    return ((*first > *second) ? first : second);
}

const char *maxOf(const char *first, const char *second)
{
    std::cout << "const char * maxOf(const char * first, const char * second)" << std::endl;
    return ((strcmp(first, second) > 0) ? first : second);
}

int main()
{
    const char *f{"there"};
    const char *s{"here"};

    std::cout << "Result " << maxOf(f, s) << std::endl;

    int ia{40};
    int ib{50};

    auto result_i = maxOf(&ia, &ib);

    std::cout << "int result " << *result_i << std::endl;

    return 0;
}