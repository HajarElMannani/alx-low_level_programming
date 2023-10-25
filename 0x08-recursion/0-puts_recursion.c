#include "main.h"
/**
 *_puts_recursion - prints a string, followed by a new line.
 *@s: String to print
 *Return: Nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\0');
_putchar('\n');
}
_putchar(*s);
s++;
_puts_recursion(s);
}
