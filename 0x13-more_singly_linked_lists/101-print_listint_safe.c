#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely (avoiding loops)
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *current, *old;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

current = head->next;
old = (head->next)->next;

while (old)
{
if (current == old)
{
current = head;
while (current != old)
{
nodes++;
current = current->next;
old = old->next;
}
current = current->next;
while (current != old)
{
nodes++;
current = current->next;
}
return (nodes);
}
current = current->next;
old = (old->next)->next;
}
return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t address, index = 0;
address = looped_listint_len(head);
if (address == 0)
{
for (; head != NULL; address++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < address; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}

return (address);
}
