#include "main.h"
/**
 *swap_int - Swaps the values of two integers
 *@a: first integer to swap
 *@b: second integer to swap
 *Return: Nothing
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
