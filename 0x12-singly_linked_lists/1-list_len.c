#include "lists.h"
/**
 *list_len - function that returns the number of
 * elements in a linked list_t list
 *@h: linked list
 *Return: number of nodes
 */
size_t list_len(const list_t *h)
{
unsigned int i;
i = 0;
if (h == NULL)
return (0);
while (h->next != NULL)
{
i++;
h = h->next;
}
return (i + 1);
}
