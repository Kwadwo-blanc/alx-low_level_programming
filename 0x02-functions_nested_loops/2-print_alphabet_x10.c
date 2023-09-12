#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
char letter = 'a';
int repeat = 10;
while (repeat > 0)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
repeat--;
letter = 'a';
}
}
