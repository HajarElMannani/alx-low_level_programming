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
for (j = len -1 / 2; j < len; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
