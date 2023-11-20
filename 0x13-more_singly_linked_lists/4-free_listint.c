#include "lists.h"
/**
 *free_listint - function that frees a listint_t list
 *@head: First node
 *Return: Nothing
 */
void free_listint(listint_t *head)
{
listint_t *ptr;
if (head == NULL)
return;
while (head != NULL)
{
ptr = head->next;
free(head);
head = ptr;
}
}
