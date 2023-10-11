#include"main.h"
/**
 *times_table - Print the 9 time table
 *@void: returns nothing
 */
void times_table(void)
{
int i, n;
int b;
for (i = 0; i <= 9; i++)
{
for (n = 0; n <= 9; n++)
{
b = n * i;
_putchar('0' + b);
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('\n');
}
}
