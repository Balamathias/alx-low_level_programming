#include "main.h"


/**
 * _print_rev_recursion: A function that prints a reversed recursion
 * @s: The string character
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
        if (*s == "\0") {
        return;
        }
	_print_rev_recursion(s);
        s--;
    _putchar(*s);
}
