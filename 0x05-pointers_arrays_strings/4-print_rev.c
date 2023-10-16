#include "main.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line
 *@s: string to print in reverse
 *Return: Nothing
 */
void print_rev(char *s)
{
int i;
n = _strlen(*s);
i = n;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
