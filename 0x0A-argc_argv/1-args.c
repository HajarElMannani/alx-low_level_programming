#include <stdio.h>
/**
 *main - program that prints the number of arguments passed into it
 *@argc: Numbers of arguments
 *@argv: array pointing to arg
 *Return: 0 when success
 */
int main(int argc, char __attribute__((unused))*argv[])
{
printf("%d\n", argc - 1);
return (0);
}
