#include"main.h"
/**
 *_abs - Compute the absolute value of an integer
 *@n: number to determine absolute value of
 *Return: absolute value of number
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n <  0)
{
n = n * -1;
return (n);
}
else
{
return (0);
}
}
