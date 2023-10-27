#include "main.h"
/**
 *_strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 *@dest: copy to
 *@src: copy from
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i, j, len;
i = 0;
while (src[i] != '\0')
{
i++;
}
len = i;
for (j = 0; j < len; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';
return (dest);
}
