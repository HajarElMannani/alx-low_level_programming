#include "main.h"
/**
 *print_alphabet_x10- Function that prints alphabet 10 times
 *@void: returns nothing
 */
void print_alphabet_x10(void)
{
int j;
char i;
for (j = 1; j <= 10; j++)
{
for (i = 'a'; i < 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
