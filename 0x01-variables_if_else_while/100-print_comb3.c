#include<stdio.h>
/**
 *main- Start of the program
 *Return: 0 when success
 */
int main(void)
{
int n;
for (n = '0'; n <= '8'; n++)
{
putchar(n);
putchar(n + 1);
if (n < 8)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
