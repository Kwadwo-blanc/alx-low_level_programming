#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 if successful, 1 if incorrect number of arguments.
 */

int main(int argc, char *argv[])
{
int num1, num2;

num1 = 0;
num2 = 0;
if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", num1 * num2);
return (0);
}
else
printf("Error\n");
return (1);
}
