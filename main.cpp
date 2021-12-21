#include <iostream>
#include <inttypes.h>
#include <array>
#include <algorithm>
#include <memory.h>

const int MULT = 4;

int min_sum = 4000;


void refresh_min(int b)
{
    if (b < min_sum)
    {
        min_sum = b;
    }
}

void numbers_min_sum3()
{
    int n; std::cin >> n;


    // 3 - count of minimums
    std::array<std::array<int, MULT>, 3> mins;
    
    for (int i = 0; i < MULT; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mins[i][j] = 4000;
        }
    }


    for (int i = 0; i < n; i++)
    {
        // std::cout << i << ": ";
        int a; std::cin >> a;

        // std::cout << "mod = " << a % MULT << "\n";
        std::array<int, 4> mins_by_res;
    
        for (int i = 0; i < 3; i++)
        {
            mins_by_res[i] = mins[a % MULT][i];
        }
        mins_by_res[3] = a;
        std::sort(mins_by_res.begin(), mins_by_res.end());
        
        for (int i = 0; i < 3; i++)
        {
            mins[a % MULT][i] = mins_by_res[i];
            // std::cout << mins[a % MULT][i] << ' ';
        }
        std::cout << '\n';
    }

    /* 0 = [...] % 4
    0 + 0 + 0 done
    0 + 1 + 3 done
    0 + 2 + 2 done
    1 + 1 + 2 done
    3 + 3 + 2
    */

    int &m0 = mins[0][0];
    int &m1 = mins[1][0];
    int &m2 = mins[2][0];
    int &m3 = mins[3][0];

    int &m0s = mins[0][1];
    int &m1s = mins[1][1];
    int &m2s = mins[2][1];
    int &m3s = mins[3][1];

    int curr_sum = 0;

    for (int i = 0; i < 3; i++)
    {
        curr_sum = mins[0][i];
    }

    refresh_min(curr_sum);

    refresh_min(m0 + m1 + m3);

    refresh_min(m0 + m2 + m2s);
    
    refresh_min(m1 + m1s + m2);

    refresh_min(m3 + m3s + m2);

    std::cout << min_sum;
}

int main()
{
    numbers_min_sum3();
    return 0;
}