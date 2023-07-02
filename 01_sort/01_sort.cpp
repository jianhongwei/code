#include <iostream>
// bubble sort
inline void bubble_sort(int *data, const int len)
{
    if (!data)
    {
        return;
    }

    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = i + 1; j < len; j++)
        {
            if (data[i] > data[j])
            {
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
            std::cout << "i: " << i << " j: " << j << " --- ";
            for (size_t k = 0; k < len; k++)
            {
                std::cout << data[k] << " ";
            }
            std::cout << std::endl;
        }
    }
}

inline void bubble_sort_1(int *data, const int len)
{
    if (!data)
    {
        return;
    }

    for (size_t i = 0; i < len; i++)
    {
        for (size_t j = 0; j < len - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
            std::cout << "i: " << i << " j: " << j << " --- ";
            for (size_t k = 0; k < len; k++)
            {
                std::cout << data[k] << " ";
            }
            std::cout << std::endl;
        }
    }
}

int main()
{
    const int LEN = 5;
    int data[LEN] = {5, 3, 4, 6, 1};
    std::cout << "input : " << std::endl;
    for (size_t i = 0; i < LEN; i++)
    {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "sorting ... " << std::endl;
    bubble_sort_1(data, LEN);

    std::cout << "output : " << std::endl;
    for (size_t i = 0; i < LEN; i++)
    {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
