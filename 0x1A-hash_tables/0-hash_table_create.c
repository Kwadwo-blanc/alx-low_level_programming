#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hst;
unsigned long int i;

hst = malloc(sizeof(hash_table_t));
if (hst == NULL)
return (NULL);

hst->size = size;
hst->array = malloc(sizeof(hash_node_t *) * size);
if (hst->array == NULL)
return (NULL);
for (i = 0; i < size; i++)
hst->array[i] = NULL;

return (hst);
}
