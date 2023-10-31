#include <stdlib.h>
#include "main.h"
/**
 *argstostr - function that concatenates all the arguments of your program
 *@ac:first argument to concatenate
 *@av:second argument to concatenate
 *Return:pointer to a new string, or NULL if it fails
 *NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
int i, j, len, n;
char *t;
n = 0;
len = 0;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; j < av[i][j]; j++)
{
len++;
}
len = len + ac;
}
t = malloc(sizeof(char) * len);
if (t == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; j < av[i][j]; j++)
{
t[n] = av[i][j];
n++;
}
if (t[n] == '\0')
{
t[n++] = '\n';
}
}
return (t);
}
