#include "lists.h"
/**
 *print_listint - function that prints all the elements
 *of a listint_t list
 *@h: a linked list
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
unsigned int i;
i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
