#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if the system is big endian, 1 if the system is little endian.
 */
int get_endianness(void)
{
unsigned int num = 1;
char *byte = (char *)&num;

if (*byte)
return (1);
else
return (0);
}
