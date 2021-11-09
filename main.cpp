#include <iostream>
#include <vector>
#include <inttypes.h>
using namespace std;

/*
    + 1. считатьи запомнить входные числа
    + 2. вывести все пары
    + 3. вместо вывода пары посчитать ее произведение
    + 4. вывести только пары, произведение которых кратно 21
    + 5. только кол-во пар
*/

void count_of_prod()
{
    int n = 0;
    cin >> n;

    vector<int> nums(n, 0);
    

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int corr_count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int prod = nums[i] * nums[j];
            
            corr_count += (prod % 21 == 0);
        }
    }

    cout << corr_count;
}
int main()
{
    count_of_prod();
}