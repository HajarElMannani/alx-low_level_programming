#include "main.h"
/**
 *print_number - prints an integer
 *@n: number to print
 *Return: Nothing
 */
void print_number(int n)
{
unsigned int num;
if (n < 0)
{
num = -n;
_putchar('-');
}
else
{
num = n;
}
if ((num / 10) != 0)
{
print_number((num / 10) + '\0');
}
_putchar((num % 10) + '\0');
}
