#include <stdlib.h>
#include "main.h"
/**
 *_realloc - eallocates a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated  
 *@old_size: size of ptr
 *@new_size: new size of new memory block
 *Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  int i;
  char *arr;
  if (ptr == NULL)
    {
    ptr = malloc(new_size);
    return (ptr);
    }
  if (new_size == 0 && ptr != NULL)
    {
      free(ptr);
      return (NULL);
    }
  if (new_size == old_size)
    return (ptr);
  if (new_size < old_size)
    {
      free(ptr(old_size) - ptr(new_size));
      return (ptr);
    }
  if (new_size > old_size)
    arr = malloc(new_size);
  if (arr == NULL)
    return (NULL);
  arr = ptr;
  for (i = 0; i < old_size; i++)
    {
    arr[i] = ptr[i];
    }
  return (arr);
}

