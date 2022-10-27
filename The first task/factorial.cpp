#include "factorial.h"

unsigned long factorial(unsigned long n)
{
    int f = 1;
    //перемножение всех чисел 2..n
    for (unsigned long k = 2; k <= n; k++)
        f *= k;
    return f;
}
