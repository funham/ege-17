#include <iostream>
#include <inttypes.h>
#include <stddef.h>

void func()
{
    int maximums[6][2]{};

    int N;
    std::cin >> N;

    int a;
    std::cin >> a;

    for (int i = 1; i < N; i++)
    {
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
}

int main()
{
    func();
    return 0;
}