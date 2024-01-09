#include "lists.h"
#include <stdlib.h>
/**
 *add_dnodeint - function that adds a new node at the
 *beginning of a dlistint_t list
 *@head: First node
 *@n: Integer to add
 *Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;
dlistint_t *temp;
newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->prev = NULL;
temp = *head;
newnode->next = temp;
*head = newnode;
if (temp != NULL)
temp->prev = *head;
return (newnode);
}
