#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *@s: pointer tomemory area
 *@b: constatnt byte
 *@n: numberof bytes to replace
 *Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
i = 0;
while (i < n && *s != '\0')
{
*s = b;
*s++;
}
return (s);
}
