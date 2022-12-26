#include <iostream>

template <typename T, int max_value>
bool total_odd_greater_than(T value[], size_t size)
{
    T sum{0};

    for (int i{0}; i < size; i++)
    {
        if (value[i] % 2 != 0)
        {
            sum += value[i];
        }
    }

    return (sum > max_value) ? true : false;
}
int main()
{
    int values[]{15, 20, 34, 67, 98, 43, 82, 97, 13};
    auto result = total_odd_greater_than<int, 150>(values, std::size(values));
    std::cout << "We have a sum of all odd numbers greater than 150 "
              << ((result == true) ? "YES" : "NO") << std::endl;
    return 0;
}