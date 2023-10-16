#include "main.h"
/**
 *puts_half - prints half of a string
 *@str : string to print
 *Return: Nothing
 */
void puts_half(char *str)
{
int i, j, len;
i = 0;
while (str[i] != '\0')
{
i++;
}
len = i;
for (j = len / 2; j < len; j++)
{
_putchr(str[i]);
}
_putchar('\n');
}
