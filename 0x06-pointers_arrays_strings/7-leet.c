#include "main.h"
/**
 *leet - Encode a string into 1337
 *@a: string to encode
 *Return: string a after encoding
 */
char *leet(char *a)
{
int i, j;
char al = "aAeEoOtTlL";
char num = "4433007711";
i = 0;
while (a[i] != '\0')
{
for (j = 0; j < 10; j++)
{
if (a[i] == al[j])
{
a[i] = num[j];
}
}
i++;
}
return (a);
}
