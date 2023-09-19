#include "main.h"

/**
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
**/

void rev_string(char *s)
{
char rev = s[0];
int counts = 0;
int a;
while (s[counts] != '\0')
counts++;
for (a = 0; a < counts; a++)
{
counts--;
rev = s[a];
s[a] = s[counts];
s[counts] = rev;
}
}
