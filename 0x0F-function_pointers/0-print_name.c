#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Function that prints name
 *@name: Name to print
 *@f: function pointer
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{

*f = &print_name_as_is;
*f = &print_name_uppercase
}
