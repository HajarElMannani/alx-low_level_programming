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
printf("%d", a[0]);
for (i = 1; i <= n; i++)
{
printf(", %d", a[i]);
}
_putchar('\n');
}
