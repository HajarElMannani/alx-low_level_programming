#include "main.h"
#include <stdio.h>
/**
 *print_array - print n elements of an array of integers
 *@a: Array of integers
 *@n: Number of integers to print
 *Return: Nothing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == 0)
printf("%d", a[0]);
else
{
printf(", %d", a[i]);
}
}
printf("\n");
}
