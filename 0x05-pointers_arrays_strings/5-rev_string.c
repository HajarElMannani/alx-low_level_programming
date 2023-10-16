#include "main.h"
/**
 *rev_string - Reverse a string
 *@s: String to reverse
 *Return: Nothing
 */
void rev_string(char *s)
{
int i, len, j, c, n;
char l[100];
i = 0;
n = 0;
while (s[i] != '\0')
{
i++;
}
len = i;
for (j = len - 1; j >= 0; j--)
{
c = s[j];
l[n] = c;
n++;
}
s = l;
}
