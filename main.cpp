#include <iostream>
#include <vector>

using namespace std;

/*

1. + считатьи запомнить входные числа
2. + вывести все пары
3. + вместо вывода пары посчитать ее сумму
4. вывести только нечетные суммы
5. вывести только максималную сумму

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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << nums[i] + nums[j] << endl;
        }
    }
}

int main()
{
    max_sum();
    cout << "Hello, world!" << endl;
}