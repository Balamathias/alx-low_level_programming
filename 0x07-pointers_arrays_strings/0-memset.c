#include <stdio.h>
#include "main.h"
/**
 * _memset - meant to fill the memory with a specific value
 * @s: addrress start
 * @b: the actual value
 * @n: number of bytes to be changed
 *
 * Return: change an n-byte array with a new value
 */
char *_memset(char *s, char b, unsigned int n) {
	int i = 0;
	for (; n > 0, i++) {
		s[i] = b;
		n--;
	}
	return s;
}	

