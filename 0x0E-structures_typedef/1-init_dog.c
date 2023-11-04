#include <stdio.h>
#include "dog.h"
/**
 *init_dog - function that initialize a variable of type struct dog
 *@d: Dog
 *@name: Name of dog
 *@age: Age of dog
 *@owner: name of the dog owner
 *Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
return (NULL);
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
return (d);
free(d);
}
