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
    int N = 0;
    cin >> N;

    vector<int> numbers(N, 0);
    

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << numbers[i];
    }
    

}
int main()
{
    count_of_prod();
}