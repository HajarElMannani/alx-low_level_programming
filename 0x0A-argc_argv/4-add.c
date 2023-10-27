#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that adds positive numbers
 *@argc: length of argv
 *@argv: array of strings
 *Return: 0 when success, 1when error
 */
int main(int argc, char *argv[])
{
int i, add;
add = 0;
if (argc < 1)
printf("%d\n", 0);
for (i = 1; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("Error\n");
return (1);
}
add += atoi(argv[i]);
}
printf("%d\n", add);
return (0);
}
