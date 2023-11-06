#ifndef DG_H
#define DG_H
/**
 *struct dog - structure containing name, age and owner
 *@name: name of the dog
 *@age: Age of dog
 *@owner: Owner of the dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DG_H*/
