#ifndef DG_H
#define DG_H
/**
 *struct dog - structure containing name, age and owner
 *@name: name of the dog
 *@age: Age of dog
 *@owner: Owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /*DG_H*/
