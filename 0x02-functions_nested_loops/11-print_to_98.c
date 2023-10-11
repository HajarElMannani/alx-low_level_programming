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
if (n <= 98)
{
for (i = n ; i <= 98; i++)
{
if (i != 98)
{
printf("%d, ", i);
}
if (i == 98)
{
printf("%d\n", 98);
}
}
else if (n > 98)
{
for (i = n; i > 98; i--)
{
if (n != 98)
{
printf("%d, ", i);
}
if (n == 98)
{
printf("%d\n", 98);
}
}
}
