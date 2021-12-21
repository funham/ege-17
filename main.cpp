#include <iostream>
#include <inttypes.h>
#include <array>
#include <algorithm>
#include <memory.h>

const int MULT = 4;


std::array<int, 3> min_trio = {1002, 1002, 1002};

void refresh_min(std::array<int, 3> new_trio)
{
    int min_sum = 0;
    int new_sum = 0;

    for (int i = 0; i < 3; i++)
    {
        min_sum += min_trio[i];
        new_sum += new_trio[i];
    }
    if (new_sum < min_sum)
    {
        min_trio = new_trio;
    }
}

void numbers_min_sum3()
{
    int n; std::cin >> n;

    // 3 - count of minimums
    std::array<std::array<int, 3>, MULT> mins;
    
    for (int i = 0; i < MULT; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mins[i][j] = 4000;
        }
    }


    for (int i = 0; i < n; i++)
    {
        // std::cout << "i: " << i << ", n: " << n;
        int a; std::cin >> a;

        //std::cout << "a % 4 = " << a % 4 << '\n';

        std::array<int, 4> mins_by_res;
    
        for (int j = 0; j < 3; j++)
        {
            mins_by_res[j] = mins[a % MULT][j];
        }

        mins_by_res[3] = a;
        std::sort(mins_by_res.begin(), mins_by_res.end());
        
        for (int j = 0; j < 3; j++)
        {
            mins[a % MULT][j] = mins_by_res[j];
        }
    }

    /* 0 = [...] % 4
    0 + 0 + 0 done
    0 + 1 + 3 done
    0 + 2 + 2 done
    1 + 1 + 2 done
    3 + 3 + 2 done
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

    refresh_min({mins[0][0], mins[0][1], mins[0][2]});

    refresh_min({m0, m1, m3});

    refresh_min({m0, m2, m2s});
    
    refresh_min({m1, m1s, m2});

    refresh_min({m3, m3s, m2});

    for (int i = 0; i < 3; i++)
    {
        std::cout << min_trio[i] << ' ';
    }
}

int main()
{
    numbers_min_sum3();
    return 0;
}