#include "main.h"
/**
 *_strncpy - copy a string
 *@dest: string we have
 *@src: string to copy
 *@n: number of bytes to copy
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (dest[i] != '\0')
{
dest[i] = '\0';
i++;
}
dest[i] = '\0';
return (dest);
}
