#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t node_count = 0;
listint_t *current;
int next_node;
if (!h || !*h)
return (0);
while (*h)
{
next_node = *h - (*h)->next;
if (next_node > 0)
{
current = (*h)->next;
free(*h);
*h = current;
node_count++;
}
else
{
free(*h);
*h = NULL;
node_count++;
break;
}
}
*h = NULL;
return (node_count);
}
