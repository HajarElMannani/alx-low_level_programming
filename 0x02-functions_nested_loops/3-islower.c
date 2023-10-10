#include"main.h"
/**
 *_islower- Checks for lowercase characters
 *@c:character to test
 *Return: 1 if lowercase, 0 if uppercase
 */
int _islower(int c)
{
if (c <= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
