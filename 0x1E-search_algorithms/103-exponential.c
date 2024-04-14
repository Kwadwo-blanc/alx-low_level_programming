#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @low: The lower index of the subarray to search in
 * @high: The higher index of the subarray to search in
 * @value: Value to search for
 *
 * Return: The index where value is located,
 *         or -1 if value is not present in array
 */
int _binary_search(int *array, size_t low, size_t high, int value)
{
size_t mid, i;

while (low <= high)
{
printf("Searching in array: ");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
}
printf("\n");

mid = (low + high) / 2;

if (array[mid] < value)
low = mid + 1;
else if (array[mid] > value)
high = mid - 1;
else
return (mid);
}

return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 *         or -1 if value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
size_t bound = 1, low;

if (array == NULL)
return (-1);

while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}

low = bound / 2;
if (bound >= size)
bound = size - 1;

printf("Value found between indexes [%lu] and [%lu]\n", low, bound);
return (binary_search(array, low, bound, value));
}
