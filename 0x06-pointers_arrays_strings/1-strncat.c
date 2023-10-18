#include "main.h"
/**
 *_strncat - concatenate two strings
 *@dest: first string
 *@src: string to concatenate
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i] = sec[j];
i++;
j++;
}
dest[i] = '\0';
return (0);
}
