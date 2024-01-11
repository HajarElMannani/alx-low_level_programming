#include "lists.h"
/**
 *insert_dnodeint_at_index - function that inserts
 *a new node at a given position.
 *@h: First node
 *@idx: position of node
 *@n: integer to insert
 *Return: Inseted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *newnode = NULL;
dlistint_t *temp = NULL;
newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
if (*h == NULL)
return (NULL);
temp = *h;
if (idx == 0)
{
newnode->next = NULL;
newnode->prev = NULL;
if (*h == NULL)
*h = newnode;
else
{
newnode->next = *h;
temp->prev = newnode;
*h = newnode;
}
return (newnode);
}
while (i < (idx - 1) && temp != NULL)
{
temp = temp->next;
i++;
}
newnode->next = temp->next;
newnode->prev = temp;
if (temp->next != NULL)
temp->next->prev = newnode;
temp->next = newnode;
return (newnode);
}
