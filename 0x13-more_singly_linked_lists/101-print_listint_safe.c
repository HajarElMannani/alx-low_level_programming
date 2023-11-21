#include "lists.h"
/**
 *print_listint_safe - prints a listint_t linked list
 *@head: First node
 *Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
unsigned int i;
i = 0;
if (head == NULL)
exit(98);
while (head->next != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
i++;
}
return (i);
}
