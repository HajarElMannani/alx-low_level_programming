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
i = 0;
while (s[i] != '\0' && s[i] != c)
{
i++;
}
if (s[i] == c)
{
return (s);
}
else
{
return (NULL);
}
}
