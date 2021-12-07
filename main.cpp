#include <iostream>
#include <inttypes.h>

void count_of_prod()
{
    uint64_t n;
    std::cin >> n;
    uint64_t nn, n2, n5, n7, n10, n14, n35, n70;

    nn = n2 = n5 = n7 = n10 = n14 = n35 = n70 = 0;

    for (uint64_t i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        if (a % 30 == 0)
            n70++;
        else if (a % 15 == 0)
            n35++;
        else if (a % 10 == 0)
            n14++;
        else if (a % 6 == 0)
            n10++;
        else if (a % 5 == 0)
            n7++;
        else if (a % 3 == 0)
            n5++;
        else if (a % 2 == 0)
            n2++;
        else
            nn++;
    }

    // bruuuuuuuuuuh
    std::cout << n70 * nn + n70 * n2 + n70 * n5 + n70 * n7 + n70 * n10 + n70 * n14 + n70 * n35 + n70 * (n70 - 1) / 2 + n10 * n7 + n10 * n35 + n10 * n14 + n14 * n35 + n14 * n5 + n35 * n2;
}

int main()
{
    count_of_prod();
    return 0;
}