#include "main.h"
#include <stdio.h>
/**
 *_strchr - locates a character in a string
 *@s: string to look in
 *@c: Character to look for
 *Return: pointer to first occurrence of c
 */
char *_strchr(char *s, char c)
{
int i;
i = 0;
while ((s[i] != c) && (s[i] != '\0'))
{
i++;
}
if (s[i] == c)
return (s + i);
else
return (NULL);
}
