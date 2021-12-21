#include <iostream>
#include <inttypes.h>
#include <memory.h>

const int MULT = 4;

void numbers_min_sum3()
{
    int n; std::cin >> n;

    int cntrs[MULT] = {};

    // 3 - count of minimums
    int mins[MULT][3];
    memset(mins, INT_MAX, sizeof(int) * 3 * 4);


    for (int i = 0; i < n; i++)
    {
        int a; std::cin >> a;

        cntrs[a % MULT] += 1;
        
        for (int &ord_min : mins[a % MULT])
        {
            if (a < ord_min)
            {
                std::swap(a, ord_min);
            }
        }
    }
}

int main()
{
    numbers_min_sum3();
    return 0;
}