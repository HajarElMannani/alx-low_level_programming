#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: string to look in
 *@c: Character to look for
 *Return: pointer to first occurrence
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
break;
}
s++;
}
if (*s == '\0')
{
return (NULL);
}
}
