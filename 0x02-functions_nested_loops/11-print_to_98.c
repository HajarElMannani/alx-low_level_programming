#include"main.h"
#include<stdio.h>
/**
 * print_to_98 - Print numbers from n to 98
 *@n: number to begin from
 *Return: returns nothing
 */
void print_to_98(int n)
{
int i;
printf("%d", n);
for (i = n + 1; i <= 98; i++)
{
printf(", %d", i);
}
_putchar('\n');
}
