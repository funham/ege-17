#include <iostream>
#include <inttypes.h>

void num_sum_max_distance_ineff()
{
    int N;
    std::cin >> N;

    int *a = new int[N]();

    for (int i = 0; i < N; i++)
    {
        std::cout << a[i] << std::endl;
    }

    delete[] a;
}

int main()
{
    num_sum_max_distance_ineff();
    return 0;
}