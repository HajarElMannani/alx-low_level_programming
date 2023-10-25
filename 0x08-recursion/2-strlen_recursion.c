#include "main.h"
/**
 *_strlen_recursion - returns the length of a string
 *@s: Character tring
 *Return: integer length of the string s
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
