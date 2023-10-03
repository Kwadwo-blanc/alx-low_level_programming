#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
int **eee;
int x;
int y;
if (width <= 0 || height <= 0)
return (NULL);
eee = malloc(sizeof(int *) * height);
if (eee == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
eee[x] = malloc(sizeof(int) * width);
if (eee[x] == NULL)
{
for (; x >= 0; x--)
free(eee[x]);
free(eee);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
eee[x][y] = 0;
}
return (eee);
}
