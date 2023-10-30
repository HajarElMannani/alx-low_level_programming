#include <stdlib.h>
#include "main.h"
/**
 *str_concat - function that concatenates two strings
 *@s1: String
 *@s2: String to concatenate
 *Return: pointer to string, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
  int j, i;
  char *t;
  if (!s1 && !s2)
    return (NULL);
  while (*s1++)
    {
    i++;
    }
  while (*s2++)
    {
      j++;
    }
  t = malloc(i + j + 1);
  t = s1;
  while (*s1)
    {
      *t++ = *s1++;
    }
  while (*s2)
    {
      *t++ = *s2++;
    }
  *t = 0;
  return (t);
}
