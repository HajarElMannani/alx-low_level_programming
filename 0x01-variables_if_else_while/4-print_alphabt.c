#include<stdio.h>
/**
 *main- Start of the program
 *Return: 0 when success
 */
int main(void)
{
char n;
for (n = 'a'; n <= 'z' && n != 'q' && n != 'e'; n++)
putchar(n);
putchar('\n');
return (0);
}
