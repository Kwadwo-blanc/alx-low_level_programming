#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the list.
 * Return: The address of node where loop starts,or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise = head;
listint_t *hare = head;
if (!head)
return (NULL);

while (tortoise && hare && hare->next)
{
tortoise = tortoise->next;
hare = hare->next->next;
if (hare == tortoise)
{
tortoise = head;
while (tortoise != hare)
{
tortoise = tortoise->next;
hare = hare->next;
}
return (tortoise);
}
}
return (NULL);
}
