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

    for (auto i = 0; i < N; i++)
    {
        cout << a[i] << endl;
    }
    delete [] a;
}

int main()
{
    cout << "Hello, world!" << endl;
}