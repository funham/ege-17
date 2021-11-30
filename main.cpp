#include <iostream>
using namespace std;

void do_sum()
{
    int N; cin >> N;

    int *a = new int[N];

    for (auto i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int min_sum = INT16_MAX;

    for (auto i = 0; i < N - 1; i++)
    {
        for (auto j = i + 4; j < N; j++)
        {
            min_sum = std::min(min_sum, a[i] + a[j]);  
        }
    }

    cout << min_sum;

    delete [] a;
}

int main()
{
    do_sum();
}