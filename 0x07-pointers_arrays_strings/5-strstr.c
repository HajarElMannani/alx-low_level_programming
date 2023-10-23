#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 *@haystack: string to search in
 *@needle:substring to locate
 *Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
while (haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*h == *n && *n != '\0')
{
*h++;
*n++;
}
if (*n == '\0')
return (haystack);
}
return (NULL);
}
