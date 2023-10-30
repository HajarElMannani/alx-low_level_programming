#include <stdlib.h>
#include "main.h"
/**
 *_strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *@str: a string
 *Return: pointer to a new string which is a duplicate of the string str
 *NULL if str = NULL
 *NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
char *t;
t = malloc(sizeof(*str));
if (str == NULL || t == NULL)
{
return (NULL);
}
while (*str != '\0')
{
*t = *str;
t++;
str++;
}
return (t);
}
