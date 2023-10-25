#include "main.h"
int _square(int n, int i);
/**
*_sqrt_recursion - returns the natural square root of a number
*@n: number to determine square of
*Return: square of n. Otherwise If n does not have a natural
*square root, the function should return -1
*/

int _sqrt_recursion(int n)
{
return (_square(n, 1));
}

/**
*_square - calculate square,takes 2 parameteres
*@n: number to determine square of
*@i: number used for iteration
*Return: square of n. If n does not have a natural
*square root, the function should return -1
*/
int _square(int n, int i)
{
int sqrt;
sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (_square(n, i + 1));
}
