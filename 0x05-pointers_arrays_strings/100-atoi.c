#include "main.h"
/**
 *_atoi - Convert a string to an integer
 *@s: String to convert
 *Return: Integer after conversion
 */
int _atoi(char *s)
{
  int i, j, len;
  i = 0;
  while (s[i] != '\0')
    {
      i++;
    }
  len = i;
  
  for (j = 0; j < len; j++)
    {
      if (s[j] == 43 || s[j] == 45)
	{
      while (s[j] == 43 || s[j] == 45)
	{
	  s[j] = s[j] * s[j-1];
         	}
      _putchar(s[j]);
	}
      if (s[j] >= 48 && s[j] <= 57)
	_putchar(s[j]);
      else
	return (0);
    }
}
