#include<stdio.h>
/**
 *main-Start of the program
 *Return: 0 when success
 */
int main(void)
{
int n, p, k;
for (n = '0'; n <= '9'; n++)
{
for (p = '0'; p <= '9'; p++)
{
for (k = '0'; k <= '9'; k++)
{
if (!(n == p == k) && (n < p && p < k))
{
putchar(n);
putchar(p);
putchar(k);
if (n == '7' && p == '8' && k == '9')
putchar('\n');
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
return (0);
}
