#include <iostream>
#include <inttypes.h>
#include <memory.h>

constexpr int MULT_OF = 34;
constexpr int MAX_DIST = 7;

void ctrl_sum()
{
    int a = 0;
    int c_sum = 0;

    int buff[MAX_DIST] = {};
    int cntrs[MULT_OF];

    memset(cntrs, 0, sizeof(int) * MULT_OF);

    int N;
    std::cin >> N;

    for (int i = 0; i < MAX_DIST; i++)
    {
        std::cin >> buff[i];
    }

    for (int i = MAX_DIST; i < N; i++)
    {
        cntrs[buff[0] % MULT_OF] += 1;

        for (int j = 0; j < MAX_DIST - 1; j++)
        {
            buff[j] = buff[j + 1];
        }

        std::cin >> a;
        buff[MAX_DIST - 1] = a;
        // a % 34 = 3: => (34 - (a % 34) - 1) = (34 - 3 - 1)
        c_sum += cntrs[(MULT_OF - (a % MULT_OF)) % MULT_OF];
    }

    std::cout << c_sum;
}

int main()
{
    ctrl_sum();
    return 0;
}