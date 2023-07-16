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

bool is_continues(int *data, const int len)
{
    int zero_cnt = 0;
    int sum_diff = 0;
    int sum_ele[13] = {0};
    for (size_t i = 0; i < len; i++)
    {
        if (data[i] == 0)
        {
            zero_cnt++;
        }
        else
        {
            sum_ele[data[i]]++;
            if (sum_ele[data[i]] > 1)
            {
                return false;
            }
            if (i < len - 1)
            {
                sum_diff += data[i + 1] - data[i];
            }
        }
    }

    if (sum_diff <= 4)
    {
        return true;
    }
    return false;
}

// 从若干副扑克牌中随机抽 5 张牌，判断是不是一个顺子，即这5张牌是不是连续的。2～10为数字本身，A为1，J为11，Q为12，K为13，而大、小王为 0 ，可以看成任意数字。A 不能视为 14。
int main()
{
    const int LEN = 5;
    int data[LEN] = {5, 3, 0, 6, 0};
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

    bool bContinues = is_continues(data, LEN);
    if (bContinues)
    {
        std::cout << "是连续的" << std::endl;
    }
    else
    {
        std::cout << "不是连续的" << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
