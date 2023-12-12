#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string to the standard output.
 * @s: The string to be printed.
 */
void _puts(char *s)
{
while (*s != '\0')
{
write(1, s, 1);
s++;
}

write(1, "\n", 1);
}
