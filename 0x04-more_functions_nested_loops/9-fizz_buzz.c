#include<stdio.h>
/**
 *main - print numbers from 0 to 100 and replace multiples of 3 by Fizz
 *multiples of 5 by Buzz, multiples of 3 and 5 by FizzBuzz
 *Return: nothing to return
 */
int  main(void)
{
int n;
for (n = 0; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
printf("FizzBuzz ");
else if (n % 3 == 0)
printf("Fizz ");
else if (n % 5 == 0)
printf("Buzz ");
else
printf("%d ", n);
}
printf("\n");
}
