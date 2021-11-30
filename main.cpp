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

    for (auto i = 0; i < N - 1; i++)
    {
        for (auto j = i + 4; j < N; j++)
        {
            cout << a[i] << ' ' << a[j] << endl;
        }
    }
    delete [] a;
}

int main()
{
    do_sum();
}