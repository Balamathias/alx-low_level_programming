#include <unistd.h>

/**
 * _putchar: My own putchar.c
 * @c: Character to output to the stdio
 */
int _putchar(char c) {
  
   return  write(STDOUT_FILEND, &c, 1); // Output the character 'A' to standard output
}
