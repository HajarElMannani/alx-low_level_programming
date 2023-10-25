#include "main.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: Character tring
 *Return: integer length of the string s
 */
int _strlen_recursion(char *s)
{
int i;
i = 0;
if (*s != '\0')
{
_strlen_recursion(s + 1);
i++;
}
return (i);
}
