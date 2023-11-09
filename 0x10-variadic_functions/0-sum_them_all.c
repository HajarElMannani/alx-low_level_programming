#include <stdlib.h>
#include <atdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: number of arguments
 *Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list su;
if (n == 0)
return (0);
sum = 0;
va_start(su, n);
for (i = 0; i < n; i++)
{
sum = sum + va_arg(su, int);
}
va_end(su); 
return (sum);  
}
