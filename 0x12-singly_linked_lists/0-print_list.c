#include "lists.h"
#include <stdio.h>
/**
 *print_list - print all the elements of a list_t list
 *@h: singly linked list
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
unsigned int i;
i = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
if (h->str != NULL)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
i++;
h = h->next;
}
return (i);
}
