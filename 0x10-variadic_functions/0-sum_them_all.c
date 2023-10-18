#include "variadic_functions.h"
#include <stdarg.h>

/**
 * _sum_them_all - Calculate the sum of a variable number of integers.
 * @n: The number of integers to sum.
 * @...: A variable number of integers to calculate the sum of.
 *
 * Return: If n is 0, return 0.
 *         Otherwise, return the sum of all integers.
 */
int _sum_them_all(const unsigned int n, ...)
{
    va_list list_of_args;
    unsigned int i, sum = 0;

    va_start(list_of_args, n);

    for (i = 0; i < n; i++)
    {
        int num = va_arg(list_of_args, int);
        sum += num;
    }

    va_end(list_of_args);

    return (sum);
}

