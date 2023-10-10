#include<stdio.h>
/**
 *print_alphabet- function that prints alphabet in lowecase
 *@void: returns nothing
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
