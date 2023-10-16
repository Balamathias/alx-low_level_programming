#include "main.h"
#include <stdio.h>

/**
 * main-Prints the name
 * @argc: The argument count
 * @argv: The array of inputs
 * Return: Always 0 when successful, 1 when it's not
 */

int main(int argc, char *argv[])
{
        int i;
	for (i=0; i<argc, i++){
        printf("%s\n", argv[i]);
}
        
        return (0);
}
