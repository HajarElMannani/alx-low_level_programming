#include "lists.h"
/**
 *add_nodeint - adds a new node at the
 *beginning of a listint_t list
 *@head: first node
 *@n: integer in the node to add
 *Return: address of the new element, or
 * NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *num;
num = malloc(sizeof(listint_t));
if (num == NULL)
return (NULL);
num->n = n;
num->next = *head;
*head = num;
return (*head);
}
