#include<stdio.h>
/**
 *main-Start of the program
 *Return: 0 when success
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
putchar(',');
putchar(' ');
if (n == '9')
putchar('\n');
return (0);
}
