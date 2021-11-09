#include <iostream>
#include <vector>
#include <inttypes.h>
using namespace std;

/*
    1. считатьи запомнить входные числа
    2. вывести все пары
    3. вместо вывода пары посчитать ее произведение
    4. вывести тоолько пары, произведение которых кратно 55
    5. только кол-во пар
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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << nums[i] << " " << nums[j] << endl;
        }
    }
}
int main()
{
    count_of_prod();
}