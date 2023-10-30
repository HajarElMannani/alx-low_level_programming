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
char *t, *m;
int i;
i = 0;
t = str;
while (*t)
{
t++;
i++;
}
m = malloc(i + 1);
if (!str || !m)
{
return (NULL);
}
t = m;
while (*str)
{
*t = *str;
t++;
str++;
}
*t = 0; 
return (m);
}
