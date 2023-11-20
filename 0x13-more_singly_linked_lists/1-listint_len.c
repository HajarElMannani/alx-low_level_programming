#include "lists.h"
/**
 *listint_len - function that returns the number
 *of elements in a linked listint_t list
 *@h: a linked list
 *Return: the number of elements in h
 */
size_t listint_len(const listint_t *h)
{
unsigned int i;
i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
