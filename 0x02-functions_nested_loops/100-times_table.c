#include "main.h"
/**
*print_times_table - print the n times table, starting with 0
*@n: n times table
*Return: Nothing
*/
void print_times_table(int n)
{
int i, j, p;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
p = i * j;
if (p == 0)
{
_putchar(p + '0');
}
else if(p > 0 && p <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(p + '0');
}
else if (p >= 10 && p <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(p /10 + '0');
_putchar(p % 10 +'0'); 
}
else if (p >= 100 )
{
_putchar(',');
_putchar(' ');
_putchar((p / 100) + '0');
_putchar(((p % 10) % 10) + '0');
_putchar((p % 10) + '0');
}
}
}
}
_putchar('\n');
}
