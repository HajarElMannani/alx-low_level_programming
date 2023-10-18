#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: array to reverse
 *@n: number of elements of the array
 *Return: Nothing
 */
void reverse_array(int *a, int n)
{
int i, j, c;
i = 0;
j = n;
while (i < n / 2)
{
c = a[i];
a[i] = a[j - 1];
a[j - 1] = c;
i++;
j--;
}
}
