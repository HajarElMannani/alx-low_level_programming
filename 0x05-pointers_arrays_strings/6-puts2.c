#include "main.h"
/**
 *puts2 - prints every other character of a string,
 * starting with the first character
 *@str: String to print
 *Return: Nothing
 */
void puts2(char *str)
{
int i, j, len;
i = 0;
while (str[i] != '\0')
{
i++;
}
len = i;
for (j = 0; j <= len; j++)
{
_putchar(str[j]);
j = j + 2;
}
_putchar('\n');
}
