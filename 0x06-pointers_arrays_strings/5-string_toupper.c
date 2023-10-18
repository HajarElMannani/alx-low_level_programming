#include "main.h"
/**
 *string_toupper - Change all lowercase letters of a string to uppercase
 *@a: string to convert
 *Return: Nothing
 */
char *string_toupper(char *a)
{
int i;
i = 0;
while (a[i]] != '\0')
{
if (a[i] >= 97 && a[i] <= 120)
{
a[i] = a[i] - 32;
}
i++;
}
}
