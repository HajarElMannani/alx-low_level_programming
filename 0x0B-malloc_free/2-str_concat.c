#include <stdlib.h>
#include "main.h"
/**
 *str_concat - function that concatenates two strings
 *@s1: String
 *@s2: String to concatenate
 *Return: pointer to string, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
int j, i;
char *t, *m;
j = 0;
i = 0;
t = s1;
if (s1)
while (*t++)
{
i++;
}
else
s1 = "";
t = s2;
if (s2)
while (*t++)
{
j++;
}
else
s2 = "";
m = malloc(i + j + 1);
if (!m)
return (NULL);
t = m;
while (*s1)
{
*t++ = *s1++;
}
while (*s2)
{
*t++ = *s2++;
}
*t = 0;
return (m);
}
