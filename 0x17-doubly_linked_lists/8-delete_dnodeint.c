#include "lists.h"
/**
 *delete_dnodeint_at_index - function that deletes the
 *node at index index of a dlistint_t linked list
 *@head: First node
 *@index: Index of the node that should be deleted
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp;
dlistint_t *after;
if (*head == NULL)
return (-1);
temp = *head;
if (index == 0)
{
*head = temp->next;
if (temp->next != NULL)
{
temp->next->prev =  NULL;
}
free(temp);
return (1);
}
while (i < (index - 1))
{
if (temp->next == NULL)
return (-1);
temp = temp->next;
}
after = temp->next->next;
if (temp->next->next != NULL)
{
temp->next->next->prev = temp;
}
free(temp->next);
temp->next = after;
return (1);
}
