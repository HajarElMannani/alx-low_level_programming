#include "lists.h"
/**
 *insert_nodeint_at_index - function that inserts
 * a new node at a given position
 *@head: First node
 *@idx: ndex of the list where the new node should
 * be added
 *@n: integer in new node
 *Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i, j;
listint_t *newnode;
listint_t *prev, *ptr;
i = 0;
j = 0;
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
prev = *head;
while (j < (idx - 1) && prev->next != NULL)
{
prev = prev->next;
j++;
}
ptr = *head;
while (i < idx && ptr->next != NULL)
{
ptr = ptr->next;
i++;
}
if (i == idx)
{
newnode->next = ptr;
prev->next = newnode;
return (newnode);
}
else
return (NULL);
}
