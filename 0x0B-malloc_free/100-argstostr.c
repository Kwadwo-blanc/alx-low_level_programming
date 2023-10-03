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
r = 0;
int m;
m = 0;
char *srt;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
m++;
}
m += ac;
srt = malloc(sizeof(char) * m + 1);
if (srt == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
srt[r] = av[i][j];
r++;
}
if (srt[r] == '\0')
{
srt[r++] = '\n';
}
}
return (srt);
}
