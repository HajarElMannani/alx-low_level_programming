#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - function that allocates memory using malloc
 *@b:size of memory to allocate
 *Return: pointer to the allocated memory
 *if faillure, terminate  with status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
