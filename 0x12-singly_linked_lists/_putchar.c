#include "lists.h"

/**
 * _putchar - A function to print text to standard output
 * @msg: The character string to print
 *
 * Return: Void
 */
void _putchar(char* msg)
{
	write(1, msg, strlen(msg));
}
