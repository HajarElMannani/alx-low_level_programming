#include <stdlib.h>
#include "main.h"
/**
 *create_array - function that creates an array of chars,
 * and initializes it with a specific char
 *@size: size of array
 *@c: Character to initialise array with
 *Return: pointer to the array, or NULL if it fails
 *NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *t;

if (size == 0 || t == NULL)
{
return (NULL);
}
else
{
t = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
t[i] = c;
}
return (t);
}
}
