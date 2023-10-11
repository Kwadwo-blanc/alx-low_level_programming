#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int number1;
int result;
int number2;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}

number1 = atoi(argv[1]);
op = argv[2];
number2 = atoi(argv[3]);

if (get_op_func(op) == NULL)
{
printf("Error\n");
exit(99);
}

if ((*op == '/' && number2 == 0) ||
(*op == '%' && number2 == 0))
{
printf("Error\n");
exit(100);
}
result = get_op_func(op)(number1, number2);
printf("%d\n", result);
return (0);
}
