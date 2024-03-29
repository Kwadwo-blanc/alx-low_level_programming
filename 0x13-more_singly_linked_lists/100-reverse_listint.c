#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *first;

if (*head == NULL || (*head)->next == NULL)
return (*head);
first = reverse_listint(&(*head)->next);
(*head)->next->next = *head;
(*head)->next = NULL;
return (first);
}
