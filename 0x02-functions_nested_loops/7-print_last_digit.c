#include"main.h"
/**
 *print_last_digit - print last digit of a given number
 *@n : number to give last digit of
 *Return:value of last digit of number
 */
int print_last_digit(int n)
{
int b;
if (n < 0)
{
n = n * -1;
}
b = n % 10;
_putchar(b + '0');
return (b);
}
