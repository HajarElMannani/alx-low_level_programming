#include "main.h"
/**
 *more_numbers - prints 10 times numbers from 0 to 14
 *@void: takes no parameter
 *Return: Numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
int i, n;
for (i = 0; i < 10; i++)
{
for (n = 0; n <= 14; n++)
{
if (n >= 10)
{
_putchar(n / 10 + '0');
}
_putchar(n % 10 + '0');
}
_putchar('\n');
}
}
