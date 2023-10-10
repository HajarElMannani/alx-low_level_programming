#include"main.h"
/**
 *jack_bauer - Print every minute of the day
 *Return: void
 */
void jack_bauer(void)
{
char i, j;
for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)
{
_putchar(i - '0');
_putchar(':');
_putchar(j - '0');
_putchar('\n');
}
}
}
