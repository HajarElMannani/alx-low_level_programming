#include<stdio.h>
/**
 *main- Start of the program
 *Return: 0 when success
 */
int main(void)
{
int n, p;
for (n = '0'; n <= '9'; n++)
{
for (p = '0'; p <= '9'; p++)
{
if (p != n)
{
putchar(n);
putchar(p);
}
if (p < '9')
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
