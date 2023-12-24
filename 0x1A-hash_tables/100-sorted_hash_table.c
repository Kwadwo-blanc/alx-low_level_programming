#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
unsigned long int i;
shash_table_t *new_table = malloc(sizeof(shash_table_t));

if (new_table == NULL)
return (NULL);

new_table->size = size;
new_table->array = malloc(sizeof(shash_node_t *) * size);
if (new_table->array == NULL)
{
free(new_table);
return (NULL);
}

new_table->shead = NULL;
new_table->stail = NULL;

for (i = 0; i < size; i++)
new_table->array[i] = NULL;

return (new_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *new_node, *current, *prev = NULL;

if (ht == NULL || key == NULL || value == NULL)
return (0);

new_node = malloc(sizeof(shash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = NULL;

if (new_node->key == NULL || new_node->value == NULL)
{
free(new_node->key);
free(new_node->value);
free(new_node);
return (0);
}

current = ht->shead;
while (current != NULL && strcmp(current->key, key) < 0)
{
prev = current;
current = current->snext;
}

if (prev == NULL)
{
new_node->snext = ht->shead;
ht->shead = new_node;
}
else
{
new_node->snext = prev->snext;
prev->snext = new_node;
}

if (new_node->snext == NULL)
ht->stail = new_node;

current = ht->array[key_index((const unsigned char *)key, ht->size)];
new_node->next = current;
ht->array[key_index((const unsigned char *)key, ht->size)] = new_node;

return (1);
}

/**
 * shash_table_get - Retrieves a value associated with
 *    a key in sorted hash table
 * @ht: The sorted hash table
 * @key: The key to look for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *current;

if (ht == NULL || key == NULL)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);

current = ht->array[index];

while (current != NULL)
{
if (strcmp(current->key, key) == 0)
return (current->value);
current = current->next;
}

return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *current;

if (ht == NULL)
return;

printf("{");
current = ht->shead;

while (current != NULL)
{
printf("'%s': '%s'", current->key, current->value);
current = current->snext;
if (current != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *current;

if (ht == NULL)
return;

printf("{");
current = ht->stail;

while (current != NULL)
{
printf("'%s': '%s'", current->key, current->value);
current = current->sprev;
if (current != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
unsigned long int i;
shash_node_t *current, *temp;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
current = ht->array[i];
while (current != NULL)
{
temp = current->next;
free(current->key);
free(current->value);
free(current);
current = temp;
}
}

free(ht->array);

current = ht->shead;
while (current != NULL)
{
temp = current->snext;
free(current->key);
free(current->value);
free(current);
current = temp;
}

free(ht);
}
