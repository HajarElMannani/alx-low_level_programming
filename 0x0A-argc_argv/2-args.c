#include <stdio.h>
/**
 *main - program that prints all arguments it receives
 *@argc: Number of arguments
 *@argv: Array of strings
 *Return: 0 when success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
