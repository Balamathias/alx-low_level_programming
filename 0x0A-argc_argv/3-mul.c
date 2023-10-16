#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main-Prints the name
 * @argc: The argument count
 * @argv: The array of inputs
 * Return: Always 0 when successful, 1 when it's not
 */

int main(int argc, char *argv[])
{
        int n1, n2;
	if (argc == 3){
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
        	printf("%i\n", n1 * n2);
	} else {
		printf("Error\n");
		return (1);
	}
	return (0);
}
