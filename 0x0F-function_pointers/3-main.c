
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - Do operation of two numbers
 *@argc: number of arguments
 *@argv: array of argument
 *Return:0 when success
 */
int main(int argc, char *argv[])
{
int num;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
{
printf("Error\n");
exit(100);
}
num =  get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", num);
return (0);
}
