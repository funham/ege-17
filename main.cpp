#include <iostream>
#include <inttypes.h>
#include <array>
#include <algorithm>
#include <memory.h>

const int MULT = 4;

void numbers_min_sum3()
{
    int n; std::cin >> n;


    // 3 - count of minimums
    std::array<std::array<int, MULT>, 3> mins;
    
    for (int i = 0; i < MULT; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mins[i][j] = 1002;
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
            std::cout << mins[a % MULT][i] << ' ';
        }
        std::cout << '\n';
    }

    for (int i = 0; i < MULT; i++)
    {
        
    }
}

int main()
{
    numbers_min_sum3();
    return 0;
}