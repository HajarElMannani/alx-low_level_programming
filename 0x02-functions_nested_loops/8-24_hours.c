#include"main.h"
/**
 *jack_bauer - Print every minute of the day
 *Return: void
 */
void jack_bauer(void)e
{
int i, j, k, s;
for (i = 0; i <= 2; i++)
{
for (j = 0; j <= 3; j++)
{
for (k = 0; k <= 5; k++)
{
for (s = 0; s <= 9; s++)
{
_putchar(i - '0');
_putchar(j - '0');
_putchar(':');
_putchar(k - '0');
_putchar(s - '0');
_putchar('\n');
}
}
}
}
}
