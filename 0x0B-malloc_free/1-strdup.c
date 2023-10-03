#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns to a new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
char *aba;
int i;
int j;
j = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
aba = malloc(sizeof(char) * (i + 1));
if (aba == NULL)
return (NULL);
for (j = 0; str[j]; j++)
aba[j] = str[j];
return (aba);
}
