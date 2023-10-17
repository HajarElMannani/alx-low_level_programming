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
if(p >= 0 && p <= 9)
{
putchar(p + '0');
putchar(',');
putchar(' ');
putchar(' ');
putchar(' ');
}
else if (p >= 10 && p <= 99)
{
putchar(p + '0');
putchar(',');
putchar(' ');
putchar(' ');
}
else
{
putchar(p + '0');
putchar(',');
putchar(' ');
}
}
}
}
}
