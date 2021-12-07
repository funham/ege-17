#include <iostream>
#include <inttypes.h>
#include <memory.h>

void number_sums_div_ineff_2()
{
    int a = 0;
    int cntrs[2][40];
    memset(cntrs, 0, sizeof(int) * 2 * 40);

    while (a != -9999)
    {
        std::cin >> a;
        cntrs[a >= 40][a % 40] += 1;
    }

    int c_sum = 0;
    int d0 = cntrs[1][0], d0_;
    // d0_ = cntrs[0][0];

    c_sum += d0 * (d0 - 1) / 2;
    // c_sum += d0 * d0_;

    d0 = cntrs[1][20];
    d0_ = cntrs[0][20];

    c_sum += d0 * (d0 - 1) / 2;
    c_sum += d0 * d0_;

    for (int i = 1; i < 20; i++)
    {
        int n = cntrs[1][i], nc = cntrs[1][40 - i];
        int n_ = cntrs[0][i], nc_ = cntrs[0][40 - i];

        c_sum += n * nc;
        c_sum += n * nc_;
        c_sum += n_ * nc;
    }

    std::cout << c_sum;
}

int main()
{
    number_sums_div_ineff_2();
    return 0;
}