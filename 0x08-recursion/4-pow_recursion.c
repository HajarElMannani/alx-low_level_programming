#include "main.h"
/**
 *_pow_recursion - eturns the value of x raised to the power of y
 *@x: base
 *@y: exponent
 *Return: If y is lower than 0, the function should return -1
 *else return x power y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
return (x * _pow_recursion(x, y - 1));
}
