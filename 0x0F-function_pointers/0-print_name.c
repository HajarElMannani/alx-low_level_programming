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
if (name == NULL || f == NULL)
return (NULL);
(*f)(name);
}
