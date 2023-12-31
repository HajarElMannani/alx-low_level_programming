#include "main.h"
int prime_check(int n, int j);
/**
 *is_prime_number - function that returns 1 if the input
 *integer is a prime number, otherwise return 0
 *@n: number to check if prime or not
 *Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_check(n, n - 1));
}

/**
 *prime_check - check out if number is prime or not
 *@n: number to check if prime or not
 *@j: integer for iteration
 *Return: 1 if the input integer is a prime number, otherwise return 0
 */
int prime_check(int n, int j)
{
if (j == 1)
return (1);
if (n % j == 0 && j > 0)
return (0);
return (prime_check(n, j - 1));
}
