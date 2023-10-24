#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
const listint_t *loop_start = NULL;
size_t node_count;
node_count = 0;
while (current != NULL)
{
node_count++;
printf("[%p] %d\n", (void *)current, current->n);
if (current >= loop_start)
{
fprintf(stderr, "Linked list loop detected, exiting with status 98\n");
exit(98);
}
loop_start = current;
current = current->next;
}
return (node_count);
}
