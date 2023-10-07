#include<stdio.h>
/**
 *main- Start of the program
 *Return: 0 when success
 */
int main(void)
{
  int n, i;
for (n = '0'; n <= '8'; n++)
{
while (i < n)
{
putchar(n);
i = n + 1;
putchar(i);
i++;
if (n < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
