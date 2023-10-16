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
int i, j, len;
printf("%d", a[0]);
j = 0;
while (a[j] != '\0')
{
j++;
}
len = j;
if (n <= len)
{
for (i = 1; i <= n; i++)
{
printf(", %d", a[i]);
}
}
_putchar('\n');
}
