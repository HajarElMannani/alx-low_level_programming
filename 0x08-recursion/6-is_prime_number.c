#include "main.h"
int prime_check(int n, int i);
/**
 *is_prime_number - function that returns 1 if the input
 *integer is a prime number, otherwise return 0
 *@n: number to check if prime or not
 *Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
return (prime_check(n, 1));
}

/**
 *prime_check - check out if number is prime or not
 *@n: number to check if prime or not
 *@i: integer for iteration
 *Return: 1 if the input integer is a prime number, otherwise return 0
 */
int prime_check(int n, int i)
{
if (i <= 1)
return (0);
if (n % i == 0 && n < 1)
return (0);
if (i == (n / 2))
return (1);
return (prime_check(n, i + 1));
}
