#include <iostream>

// #define DEBUG

constexpr int MAX_DIST = 7;
constexpr int MULT_OF = 24;

bool is_sum_mult(int a, int b)
{
#ifdef DEBUG
    bool res = !((a + b) % MULT_OF);
    std::cout << a << " + " << b << " is " << (res ? "OK" : "BAD") << "\n";
    return res;
#else
    return !((a + b) % MULT_OF);
#endif
}

void do_sum()
{
    int N;
    std::cin >> N;
    int count = 0;
    int buff[MAX_DIST] = {};

    for (int i = 0; i < MAX_DIST; i++)
    {
        std::cin >> buff[i];
    }

    for (int i = 0; i < MAX_DIST - 1; i++)
    {
        for (int j = i + 1; j < MAX_DIST; j++)
        {
            count += is_sum_mult(buff[i], buff[j]);
        }
    }

    for (int i = MAX_DIST; i < N; i++)
    {
        int a;
        std::cin >> a;

        for (int i = 0; i < MAX_DIST - 1; i++)
        {
            buff[i] = buff[i + 1];
            count += is_sum_mult(buff[i], a);
        }
        buff[MAX_DIST - 1] = a;
    }

    std::cout << count;
}

int main()
{
    do_sum();
}