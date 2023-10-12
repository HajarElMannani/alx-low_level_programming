#include "main.h"
/**
 *print_diagonal - Draw a diagonal line on the terminal
 *@n: number of times the character '\' is printed
 *Return: nothing to return
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
_putchar('\\');
_putchar('\n');
for (i = 1; i < n; i++)
{
for (j = 1; j <= i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
