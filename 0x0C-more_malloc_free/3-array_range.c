#include<stdlib.h>
#include "main.h"
/**
 *array_range - function that creates an array of integers
 *@min: minimum value
 *@max: maximum value
 *Return: pointer to array, if min > max return NULL
 */
int *array_range(int min, int max)
{
int *arr;
int i, n;
n = max - min + 1;
if (min > max)
return (NULL);
arr = malloc((max - min + 1) * sizeof(int));
if (arr == NULL)
return (NULL);
arr[0] = min;
for (i = 1; i < n; i++)
{
arr[i] = ++min;
}
return (arr);
}
