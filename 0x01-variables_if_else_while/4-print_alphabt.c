#include<stdio.h>
/**
 *main- Start of the program
 *Return: 0 when success
 */
int main(void)
{
char n;
while (n != 'e' || n != 'q')
{
for (n = 'a'; n <= 'z' ; n++)
putchar(n);
putchar('\n');
}
return (0);
}
