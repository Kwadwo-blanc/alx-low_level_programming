#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to a pointer to the head of the list
 * @idx: Index of the list where the new node should be added (starts at 0)
 * @n: Integer to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(
dlistint_t **head, unsigned int idx, int n)
{
if (head == NULL)
return (NULL);

if (idx == 0)
return (insert_at_start(head, n));

if (idx == dlistint_len(*head))
return (add_dnodeint_end(head, n));

return (insert_at_index(head, idx, n));
}

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count;
count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}

/**
 * insert_at_start - Inserts a new node at the beginning of a list
 * @head: Pointer to a pointer to the head of the list
 * @n: Integer to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_at_start(dlistint_t **head, int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;

if (*head != NULL)
(*head)->prev = new_node;

*head = new_node;
return (new_node);
}

/**
 * insert_at_index - Inserts a new node at a specific index in the list
 * @head: Pointer to a pointer to the head of the list
 * @idx: Index of the list where the new node should be added
 * @n: Integer to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_at_index(dlistint_t **head, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int count;
count = 0;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
temp = *head;

while (temp != NULL && count < idx - 1)
{
temp = temp->next;
count++;
}

if (temp == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = temp->next;
new_node->prev = temp;
if (temp->next != NULL)
temp->next->prev = new_node;
temp->next = new_node;

return (new_node);
}
