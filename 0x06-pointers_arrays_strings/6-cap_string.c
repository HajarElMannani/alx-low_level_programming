#include "main.h"
/**
 *cap_string - Capitalize all words of a string
 *@a: String to capitalize
 *Return: the string a
 */
char *cap_string(char *a)
{
int i;
i = 0;
while (a[i] != '\0')
{
if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
a[i] = a[i] - 32;
else if (a[i] == '!' || a[i] == '?' || a[i] == '"' || a[i] == '.'
|| a[i] == ';' || a[i] == '(' || a[i] == ')' || a[i] == '{' ||
a[i] == '}' || a[i] == ':' || a[i] == '\t' || a[i] == ' ' ||
a[i] == '\n' || a[i] == ',')
{
if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
{
a[i + 1] = a[i + 1] - 32;
}
}
i++;
}
return (a);
}
