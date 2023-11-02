#include <stlib.h>
#include "main.h"
/**
 *_calloc - function that allocates memory for an array, using malloc
 *@nmemb: array of elements
 *@size: size of elements
 *Return:  pointer to the allocated memory.
 *If nmemb or size is 0, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
int *ptr;
i = 0;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
while (i < nmemb * size)
}
ptr[i] = 0;
i++;
}
return (ptr);
}
