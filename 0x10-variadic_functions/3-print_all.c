#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all - function that prints anything
 *@format: list of formats
 *Return: Nothing
 */
void print_all(const char * const format, ...)e
{
int i, j;
char *ptr;
char *sep;
va_list prall;

i = 0;
j = 0;
sep = ", ";
va_start(prall, format);
while (format && format[i])
{
i++;
}
while (format && format[j])
{
if (j == (i - 1))
sep = "";
switch (format[j])
{
case 'c':
printf("%c%s", va_arg(prall, int), sep);
break;
case 'i':
printf("%d%s", va_arg(prall, int), sep);
break;
case 'f':
printf("%f%s", va_arg(prall, double), sep);
break;
case 's':
ptr = va_arg(prall, char *);
if (ptr == NULL)
ptr = "(nil)";
printf("%s%s", ptr, sep);
break;
}
j++;
}
printf("\n");
va_end(prall);
}
