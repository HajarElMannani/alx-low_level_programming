#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat - function that concatenates two strings
 *@s1: String
 *@s2: string to concatenate
 *@n: first n bytes of s2
 *Return: pointer shall point to a newly allocated space in memory
 *containg the concatenated strings
 *NULL when faillure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j;
char *ptr;
i = 0;
j = 0;
while (*s1)
i++;
while (*s2)
j++;
ptr = malloc(i + j + 1);
if (ptr == NULL)
return (NULL);
else
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (s1)
*ptr++ = *s1++;
if (n < j || s2)
*ptr++ = *s2++;
}
*ptr = '\0';
return(ptr);
}
