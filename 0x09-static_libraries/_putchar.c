#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success, returns the character written. On error, returns -1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
