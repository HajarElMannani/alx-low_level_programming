#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*_strlen - Returns the length of a string
*@s: a string of characters
*Return: length of sring
*/
int _strlen(char *s)
{
int len;
len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}

/**
 *_strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 *@dest: copy to
 *@src: copy from
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i, j;
i = 0;
while (src[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';
return (dest);
}
/**
 *new_dog - function that creates a new dog
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
 *Return: new dog data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
{
return (NULL);
}
newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (newdog->name == NULL)
{
free(newdog);
return (NULL);
}
newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (newdog->owner == NULL)
{
free(newdog->name);
free(newdog);
return (NULL);
}
newdog->name = _strcpy(newdog->name, name);
newdog->age = age;
newdog->owner = _strcpy(newdog->owner, owner);
return (newdog);
}
