#include "main.h"
/**
 *_strlen - Returns the length of a string
 *@s: a string of characters
 *Return: length of sring
 */
int _strlen(char *s)
{
int i;
i = 0;
while (*s[i] != "/0")
{
i++;
}
return (i + 1);
}
