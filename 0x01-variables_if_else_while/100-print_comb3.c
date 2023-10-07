#include<stdio.h>
/**
 *main- Start of the program
 *Return: 0 when success
 */
int main(void)
{
int n, p;
for (n = '0'; n <= '8'; n++)
{
for (p = '0'; p <= '9'; p++)
{
if (n != p && n < p)
{
putchar(n);
putchar(p);
putchar(',');
putchar(' ');
}
if (n == '8' && p == '9')
putchar('\n');
}
}
return (0);
}
