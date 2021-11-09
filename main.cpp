#include <iostream>
#include <inttypes.h>
using namespace std;

void count_of_prod()
{
    /*
    1. Считать число
    2. Классифицировать его
    3. Инкрементировать соответствующий счетчик
    4. Вывести сумму всех счетчиков
    */

   uint32_t n; cin >> n;
   uint32_t nn, n7, n3, n21;
   
   nn = n7 = n3 = n21 = 0;

   for (uint32_t i = 0; i < n; i++)
   {
        int a; cin >> a;
        if (a % 3 == 0)
            n3++;
        else if (a % 7 == 0)
            n7++;
        else if (a % 21 == 0)
            n21++;
        else
            nn++;
   }

   cout << n21*(n21 - 1)/2 + n21*n3 + n21*n7 + n21*nn + n7 * n3;
}

int main()
{
    count_of_prod();
}