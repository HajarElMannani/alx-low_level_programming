#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: memory area to copy to
 *@src: memory area to copy from
 *@n: number ofbytes to copy
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
