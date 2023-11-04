#include <stdio.h>
#include "dog.h"

/**
 *free_dog - function that frees dogs
 *@d: dog's data
 *Return: Nothing
 */
void free_dog(dog_t *d)
{
free(d->name);
free(d->age);
free(d->owner);
free(d);
}
