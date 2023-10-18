#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _print_all - Prints various types of arguments based on the format string.
 * @format: A string containing format specifiers for the arguments.
 */
void _print_all(const char * const format, ...)
{
    int i = 0;
    char *str, *separator = "";

    va_list list_of_args;

    va_start(list_of_args, format);

    if (format)
    {
        while (format[i])
        {
            switch (format[i])
            {
                case 'c':
                    printf("%s%c", separator, va_arg(list_of_args, int));
                    break;
                case 'i':
                    printf("%s%d", separator, va_arg(list_of_args, int));
                    break;
                case 'f':
                    printf("%s%f", separator, va_arg(list_of_args, double));
                    break;
                case 's':
                    str = va_arg(list_of_args, char *);
                    if (!str)
                        str = "(nil)";
                    printf("%s%s", separator, str);
                    break;
                default:
                    i++;
                    continue;
            }
            separator = ", ";
            i++;
        }
    }

    printf("\n");
    va_end(list_of_args);
}

