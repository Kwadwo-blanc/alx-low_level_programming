#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
int i;
int j;
int r;
int l;
char *mee;
l = 0;
r = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
l++;
}
l += ac;
mee = malloc(sizeof(char) * (l + 1));
if (mee == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
mee[r] = av[i][j];
r++;
}
if (mee[r] == '\0')
{
mee[r++] = '\n';
}
}
return (mee);
}
