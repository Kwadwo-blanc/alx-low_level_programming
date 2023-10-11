#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 if successful, 1 for argument errors, 2 for negative bytes.
 */
int main(int argc, char *argv[])
{
int num_bytes;
int i;
char *address;

if (argc != 2)
{
printf("Error\n");
return (1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
address = (char *)&main;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", address[i] & 0xFF);
if (i < num_bytes - 1)
printf(" ");
}
printf("\n");
return (0);
}
