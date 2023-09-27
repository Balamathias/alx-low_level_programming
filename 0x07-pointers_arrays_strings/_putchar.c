#include "main.h"
#include <unistd.h>
/**
 * _putchar - will write the character c to standard output
 * @c: The character to be printed to stdout
 *
 * Return: When successful, 1
 * On error, -1 is returned and the error no is set accordingly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
