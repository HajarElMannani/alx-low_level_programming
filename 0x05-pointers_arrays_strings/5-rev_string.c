#include "main.h"
/**
 *rev_string - Reverse a string
 *@s: String to reverse
 *Return: Nothing
 */
void rev_string(char *s)
{
int i, len, j, n;
char c;
i = 0;
n = 0; 
while (s[i] != '\0')
{
i++;
}
len = i;
for (j = len - 1 ;j >= len / 2; j--)
{
c = s[j];
s[j] = s[n];
s[n++] = c; 
}
}
