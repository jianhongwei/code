#include <iostream>
#include <math.h>

/*给定一个正整数 n ，将其拆分为 k 个 正整数 的和，并使这些整数的乘积最大化。返回可以获得的最大乘积 。*/

int splitter(int n)
{
    if (n == 1)
    {
        return 1;
    }

    if (n <= 3)
    {
        return n - 1;
    }

    int a = n / 3, b = n % 3;
    if (b == 0)
    {
        return pow(3, a);
    }

    if (b == 1)
    {
        return pow(3, a - 1) * 4;
    }

    return pow(3, a) * 2;
}

// 把绳子尽可能切为多个长度为3的片段，留下的最后一段绳子的长度可能为0,1,2 三种情况。

int main()
{
    int n;
    std::cout << "please cin a number" << std::endl;
    std::cin >> n;

    std::cout << "input: " << n << std::endl;
    std::cout << "output: " << splitter(n) << std::endl;

    return 0;
}
