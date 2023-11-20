#include "lists.h"
/**
 *sum_listint - function that returns the sum of all
 *the data (n) of a listint_t linked list
 *@head: first node
 *Return: sum of all the data
 *0 if list is empty
 */
int sum_listint(listint_t *head)
{
int sum;
sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
