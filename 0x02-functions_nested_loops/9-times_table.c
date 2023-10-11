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
if (n == 0)
{
_putchar(b + '0');
}
if (b < 10 && n != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(b % 10 + '0');
}
else if (b >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
}
}
_putchar('\n');
}
}
