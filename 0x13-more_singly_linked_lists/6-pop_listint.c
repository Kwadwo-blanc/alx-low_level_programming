#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
int data;
data = 0;
    
if (head != NULL && *head != NULL)
{
listint_t *temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);
}

return (data);
}
