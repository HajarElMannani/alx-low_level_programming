#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - function that executes a function given
 * as a parameter on each element of an array
 *@array: Array of integers
 *@size: size of the array
 *@action: Pointer to the function to use
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
i = 0;
if (array == NULL || size <= 0 || action == NULL)
return;
while (i < size)
{
(*action)(array[i]);
i++;
}
}
