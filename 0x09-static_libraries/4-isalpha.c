#include"main.h"
/**
 *_isalpha- ckeck for alphabetic character
 *@c:ascii value of the character to check
 *Return: 1 if alphabetic character, 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
