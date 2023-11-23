#include "main.h"
/**
 *flip_bits - eturns the number of bits you would
 *need to flip to get from one number to another
 *@n: first number
 *@m: number we want
 *Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int bit;
unsigned int i;
i = 0;
bit = n ^ m;
while (bit > 0)
{
if ((bit & 1) > 0)
i++;
bit = bit >> 1;
}
return (i);
}
