#include <iostream>
#include <inttypes.h>
#include <stddef.h>
#include <array>

void func()
{
    int maximums[6][2]{};

    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        int a;
        std::cin >> a;

        auto &minmax = maximums[i % 6][0];
        auto &maxmax = *(&minmax + 1); // just next element

        // kinda sorting a and maximums
        if (a > minmax)
        {
            minmax = a;
        }
        if (minmax > maxmax)
        {
            std::swap(minmax, maxmax);
        }
    }

    int max_sum = 0;
    for (int i = 0; i < 6; i++)
    {
        auto &m = maximums[i];
        auto sum = m[0] + m[1];
        max_sum = std::max(sum, max_sum);
    }

    std::cout << max_sum;
}

int main()
{
    func();
    return 0;
}