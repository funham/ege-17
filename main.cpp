#include <iostream>
#include <inttypes.h>
#include <memory.h>

constexpr int MULT_OF = 34;

void number_sums_div_eff_2()
{
    int a = 0;
    int cntrs[MULT_OF];
    memset(cntrs, 0, sizeof(int) * MULT_OF);

    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> a;
        cntrs[a % MULT_OF] += 1;
    }

    int c_sum = 0;
    int n = cntrs[0], nc;
    c_sum += n * (n - 1) / 2;

    n = cntrs[MULT_OF / 2];

    c_sum += n * (n - 1) / 2;

    for (int i = 1; i < MULT_OF / 2; i++)
    {
        n = cntrs[i], nc = cntrs[MULT_OF - i];
        c_sum += n * nc;
    }

    std::cout << c_sum;
}

int main()
{
    number_sums_div_eff_2();
    return 0;
}