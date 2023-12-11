#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int first = 0, second = 0;

	while (*(dest + first) != '\0')
	{
		first++;
	}

	while (second < n)
	{
		*(dest + first) = *(src + second);
		if (*(src + second) == '\0')
			break;
		first++;
		second++;
	}
	return (dest);
}
