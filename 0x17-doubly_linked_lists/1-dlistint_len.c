#include "lists.h"
/**
 *dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list.
 *@h: doubly linked list
 *Return: Number of elements in h
 */
size_t dlistint_len(const dlistint_t *h)
{
int n = 0;
while (h != NULL)
{
n++;
h = h->next;
}
return (n);
}
