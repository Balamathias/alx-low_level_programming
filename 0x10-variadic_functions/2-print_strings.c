#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _print_strings - Print strings separated by a given separator and end with a newline.
 * @separator: The string to be printed between strings (can be NULL).
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings is NULL, "(nil)" is printed instead.
 */
void _print_strings(const char *separator, const unsigned int n, ...)
{
    va_list list_of_strings;
    char *str;
    unsigned int index;

    va_start(list_of_strings, n);

    for (index = 0; index < n; index++)
    {
        str = va_arg(list_of_strings, char *);

        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);

        if (index != (n - 1) && separator != NULL)
            printf("%s", separator);
    }

    printf("\n");

    va_end(list_of_strings);
}

