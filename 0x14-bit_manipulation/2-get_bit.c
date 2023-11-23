#include "main.h"
/**
 *get_bit - function that returns the value
 *of a bit at a given index
 *@n: a number
 *@index: starting from 0 of the bit you want to get
 *Return: value of the bit at index index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;
if (index > 63)
return (-1);
i = (n >> index) & 1;
return (i);
}
