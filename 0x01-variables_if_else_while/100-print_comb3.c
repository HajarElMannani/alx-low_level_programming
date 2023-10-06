#include<stdio.h>
/**
 *main- Start of the program
 *Return: 0 when success
 */
int main(void)
{
int n, p;
int i;
i = 0;
for (n = '0'; n <= '9'; n++)
{
for (p = i; p <= '9'; p++)
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
i++;
}
putchar('\n');
return (0);
}
