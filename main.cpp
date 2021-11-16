#include <iostream>
using namespace std;

void max_sum_eff()
{
    int max_odd = -9999, max_even = -9999;

    int a; cin >> a;
    
    while(a != -9999)
    {
        if (a % 2)
        {
            max_odd = std::max(max_odd, a);
        }
        else
        {
            max_even = std::max(max_even, a);
        }
        cin >> a;
    }

    if (max_odd != -9999 && max_even != -9999)
    {
        cout << max_odd + max_even << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}


int main()
{
    max_sum_eff();
}