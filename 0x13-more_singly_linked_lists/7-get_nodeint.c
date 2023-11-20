#include "lists.h"
/**
 *get_nodeint_at_index - function that returns the nth
 *node of a listint_t linked list
 *@head: First node
 *@index: Index of the node starting from 0
 *Return:  nth node of a listint_t linked list
 *0 if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
i = 0;
while (i < index && head != NULL)
{
head = head->next;
i++;
}
if (i == index)
return (head);
else
return (NULL);
}
