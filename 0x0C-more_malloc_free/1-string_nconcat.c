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
  unsigned int i, j, k;
char *ptr;
char *s;
i = 0;
j = 0;
if (!s1)
s1 = "";
if (!s2)
s2 = "";
while (*s1)
i++;
while (*s2)
j++;
if (n > j)
n = j;
ptr = malloc((i + n + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
else
{
ptr = s;
while (*s1)
*s++ = *s1++;
while (k < n)
*s++ = s2[k++];
}
*s = '\0';
return(ptr);
}
