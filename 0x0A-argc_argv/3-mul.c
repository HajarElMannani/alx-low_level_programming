#include <stdlib.h>
#include <stdio.h>
/**
 *main - program that multiplies two numbers
 *@argc: length of argv
 *@argv: array of integers
 *Return: 0 when success
 */
int main(int argc, char *argv[])
{
int p;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
p = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", p);
}
return (0);
}
