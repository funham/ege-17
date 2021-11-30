#include <iostream>
using namespace std;

void do_sum()
{
    int N; cin >> N;
    int min_sum = INT16_MAX;
    int min1, min2;
    min1 = min2 = INT16_MAX;

    for (int i = 0; i < N; i++)
    {
        int a; cin >> a;
        min2 = std::min(min2, a);
        min1 = std::min(min1, min2);
    }

    min_sum = min1 + min2;

    cout << min_sum;
}

int main()
{
    do_sum();
}