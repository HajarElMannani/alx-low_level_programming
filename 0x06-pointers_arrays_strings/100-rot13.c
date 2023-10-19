#include "main.h"
/**
 *rot13 - Encode a string using rot13
 *@a: String to encode
 *Return: incoded a string
 */
char *rot13(char *a)
{
int i, j;
char *s1 = "abcdefghijklmABCDEFGHIJKLM";
char *s2 = "nopqrstuvwxyzNOPQRSTUVWXYZ";
i = 0;
while (a[i] != '\0')
{
for (j = 0; j < 26; j++)
{
if (a[i] == s1[j])
a[i] = s2[j];
}
i++
}
return (a);
}
