#include "main.h"
/**
 *rot13 - Encode a string using rot13
 *@a: String to encode
 *Return: incoded a string
 */
char *rot13(char *a)
{
int i, j;
char *s1 = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
char *s2 = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";
i = 0;
while (a[i] != '\0')
{
for (j = 0; s1[j] != '\0'; j++)
{
if (a[i] == s1[j])
a[i] = s2[j];
break;
}
i++;
}
return (a);
}
