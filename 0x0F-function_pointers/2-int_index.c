#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used for comparison.
 *
 * Return: Index of the first element for which cmp doesn't return 0.
 * If no element matches or size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
