#include "lists.h"
/**
 *add_nodeint_end - add a new node at the end
 *of a listint_t list
 *@head: first node
 *@n: integer to add
 *Return: the address of the new element
 *or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *num;
listint_t *ptr;
num = malloc(sizeof(listint_t));
if (num == NULL)
return (NULL);
num->n = n;
num->next = NULL;
if (*head == NULL)
{
*head = num;
return (num);
}
ptr = *head;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = num;
return (num);
}
