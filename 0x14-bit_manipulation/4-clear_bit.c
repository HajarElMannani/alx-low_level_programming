#include "main.h"
/**
 *clear_bit -  function that sets the value of
 *a bit to 0 at a given index
 *@n: a number
 *@index: index of bit to set
 *Return: 1 if it worked, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL)
return (-1);
if (index > sizeof(unsigned long int) * 8)
return (-1);
*n = *n & ~(1 << index);
return (1);
}
