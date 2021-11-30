#include <iostream>
using namespace std;

void do_sum()
{
    int N; cin >> N;
    int min_sum = INT16_MAX;
    int min_v = INT16_MAX;
    int buff[4] = {};
    
    for (int i = 0; i < 4; i++)
    {
        cin >> buff[i];
    }

    for (int i = 4; i < N; i++)
    {
        int a; cin >> a;
        int min_cand = buff[0];
        for (int i = 0; i < 3; i++)
        {
            buff[i] = buff[i+1];
        }
        buff[3] = a;
        min_v = std::min(min_cand, min_v);
        min_sum = std::min(min_sum, min_v + buff[3]);
    }

    cout << min_sum;
}

int main()
{
    do_sum();
}