#include "main.h"
/**
 *_strncat - concatenate two strings
 *@dest: first string
 *@src: string to concatenate
 *@n: number of bytes to concatenate
 *Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
