#include "main.h"

/**
 * main - check the code
 *
 * Return: Always void.
 */
void _puts_recursion(char *s)
{
	if (*s == "\0") {
	_putchar("\n");
	return;
	}
	_putchar(*s);
	s++;
    _puts_recursion(s);
}