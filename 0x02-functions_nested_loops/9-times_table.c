#include"main.h"
#include<unistd.h>
/**
 *times_table - Print the 9 time table
 *@void: returns nothing
 */
void times_table(void)
{
int i, n;
int b;
for (i = 0; i <= 9; i++)
{
for (n = 0; n <= 9; n++)
{
b = n * i;
write(1, b, 2);
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('\n');
}
}
