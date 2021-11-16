#include <iostream>
#include <vector>

using namespace std;

/*

1. + считатьи запомнить входные числа
2. + вывести все пары
3. + вместо вывода пары посчитать ее сумму
4. + вывести только нечетные суммы
5. + вывести только максималную сумму

*/

void max_sum()
{
    int n = 0;
    cin >> n;

    vector<int> nums(n, 0);
    

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int max = -99999; // less than -1000

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = nums[i] + nums[j];
            
            if (sum % 2)
            {
                max = std::max(sum, max);
            }
        }
    }

    cout << max << endl;
}

int main()
{
    max_sum();
}