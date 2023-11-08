#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array: array to search in
 *@size: number of elements in the array
 *@cmp: pointer to the function to be used to compare values
 *Return: the index of the first integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
i = 0;
if (array == NULL || cmp == NULL)
return (0);
if (size <= 0)
return (-1);
while (i < size)
{
if (cmp(array[i]))
return (i);
else
i++;
}
return (-1); 
}
