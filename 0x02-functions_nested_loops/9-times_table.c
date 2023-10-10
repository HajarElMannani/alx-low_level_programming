#include"main.h"
/**
 *times_table - Print the 9 time table
 *@void: returns nothing
 */
void times_table(void)
{
int i, n;
for (i = 1; i < 10; i++)
{
for (n = 1; n < 10; n++)
{
n = n *i;
_putchar(n + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('\n');
}
}
