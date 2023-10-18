#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _print_numbers - Print numbers separated by a given separator and end with a newline.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void _print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list list_of_numbers;
    unsigned int index;

    va_start(list_of_numbers, n);

    for (index = 0; index < n; index++)
    {
        int num = va_arg(list_of_numbers, int);
        printf("%d", num);

        if (index != (n - 1) && separator != NULL)
            printf("%s", separator);
    }

    printf("\n");

    va_end(list_of_numbers);
}

