#include <iostream>
#include <inttypes.h>
#include <memory.h>

constexpr int MULT_OF = 42;

void ctrl_sum()
{
    int a = 0;
    int c_sum = 0;

    int cntrs[MULT_OF][5];

    memset(cntrs, 0, sizeof(int) * MULT_OF * 5);

    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        std::cin >> a;
        cntrs[a % MULT_OF][i % 5] += 1;
    }

    for (int i = 0; i < 5; i++)
    {
        int n = cntrs[0][i], nc;

        c_sum += n * (n - 1) / 2;
        n = cntrs[MULT_OF / 2][i];
        c_sum += n * (n - 1) / 2;

        for (int j = 1; j < MULT_OF / 2; j++)
        {
            n = cntrs[j][i];
            nc = cntrs[MULT_OF - j][i];

            c_sum += n * nc;
        }
    }

    std::cout << c_sum;
}

int main()
{
    ctrl_sum();
    return 0;
}