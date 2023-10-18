#include <unistd.h>

int _putchar(char c) {
  
    write(1, &c, 1); /* Output the character 'A' to standard output */

    return 0;
}
