#include "lists.h"
/**
 *pop_listint - delete the head node of a listint_t linked
 *list, and returns the head node’s data (n)
 *@head: first node
 *Return: head node's data n
 *0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
int i;
listint_t *ptr;
i = (*head)->n;
ptr = (*head)->next;
free(*head);
*head = ptr;
return (i);
}
