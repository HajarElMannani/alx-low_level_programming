#include <stdio.h>
#include <stdlib.h>
/**
 *main -  program that prints the minimum number of
 * coins to make change for an amount of money
 *@argc: length of argv
 *@argv: array of strings
 *Return: 0 when success, 1 when error
 */
int main(int argc, char *argv[])
{
int i, mincents, coins;
char cents[] = {25, 10, 5, 2, 1};
mincents = 0;
if (argc == 2)
{
coins = atoi(argv[1]);
for (i = 0; i < 5; i++)
{
if (coins >= cents[i])
{
mincents += coins / cents[i];
coins = coins % cents[i];
if (coins % cents[i] == 0)
{
break;
}
}
}
printf("%d\n", mincents);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
