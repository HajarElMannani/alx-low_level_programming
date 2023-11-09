#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - function that prints anything
 *@separator: string of chracters between numbers
 *@n: number of arguments
 *Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list prstr;
char *ptr1;
char *ptr2;

va_start(prstr, n);
if (separator == NULL || *separator == 0)
ptr1 = "";
else
ptr1 = (char *)separator;
ptr2 = va_arg(prstr, char *);
if (n > 0)
{
if (ptr2 == NULL)
printf("nill")
else
printf("%s", ptr2);
}
for (i = 1; i < n; i++)
{
if (ptr2 == NULL)
printf("%s%s", ptr1, "nill");
else
printf("%s%s", ptr1, ptr2);
}
printf("\n");
va_end(prstr);
}
