#include "lists.h"
/**
 *add_node_end - add a new node at the end of a
 * list_t list
 *@head: pointer to first node
 *@str: string of characters
 *Return: address of the new element, or NULL
 * if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int i;
list_t *last;
list_t *ptr;
i = 0;
last = malloc(sizeof(list_t));
if (last == NULL)
return (NULL);
last->str = strdup(str);
if (strdup(str) != NULL)
{
while ((strdup(str))[i] != '\0')
{
i++;
}
}
last->len = i;
last->next = NULL;
if (*head == NULL)
{
*head = last;
return (last);
}
ptr = *head;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = last;
return (last);
}
