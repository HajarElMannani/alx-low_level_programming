#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: string to look in
 *@c: Character to look for
 *Return: pointer to first occurrence
 */
char *_strchr(char *s, char c)
{
int i;
while (*s != '\0')
{
i = *s++;  
if (*s == c)
{
return (s - 1);
break;
}
if (i == '\0')
{
return (NULL);
}
}
} 
