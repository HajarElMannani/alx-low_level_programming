#include "lists.h"
/**
 *add_node - function that adds a new node
 * at the beginning of a list_t list
 *@head: Pointer to first node
 *@str: string to add
 *Return: address of the new element,
 *or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
unsigned int i;
list_t *first;
i = 0;
first = malloc(sizeof(list_t));
if (first == NULL)
return (NULL);   
first->str = strdup(str);
if (strdup(str) != NULL)
{
while ((strdup(str))[i] != '\0')
{
i++;
}
}
first->len = i;
first->next = *head;
*head = first;
return (*head);
}
