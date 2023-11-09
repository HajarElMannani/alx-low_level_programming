#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - prints numbers, followed by a new line.
 *@separator: character that is separating numbers
 *@n: number of arguments
 *Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *ptr;
va_list prnum;
if (n == 0)
return;
if (separator == NULL || *separator == 0)
ptr = "";
else
ptr = (char *)separator;
va_start(prnum, n);
for (i = 0; i < n; i++)
{
printf("%d%s", va_arg(prnum, int), ptr);
}
printf("\n");
}
