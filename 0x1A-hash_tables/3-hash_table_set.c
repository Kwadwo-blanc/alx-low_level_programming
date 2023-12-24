#include "hash_tables.h"

/**
 * create_node - Creates a new hash node
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: A pointer to the new hash node, or NULL on failure
 */
static hash_node_t *create_node(const char *key, const char *value)
{
hash_node_t *new_node = malloc(sizeof(hash_node_t));

if (new_node == NULL)
return (NULL);

new_node->key = strdup(key);
new_node->value = strdup(value);

if (new_node->key == NULL || new_node->value == NULL)
{
free(new_node->key);
free(new_node->value);
free(new_node);
return (NULL);
}

return (new_node);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *current;

if (ht == NULL || key == NULL || value == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);

current = ht->array[index];

while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free(current->value);
current->value = strdup(value);

return (current->value == NULL ? 0 : 1);
}
current = current->next;
}
new_node = create_node(key, value);

if (new_node == NULL)
return (0);

new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
