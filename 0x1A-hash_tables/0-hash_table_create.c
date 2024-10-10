#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: address of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_t;
hash_node_t **array;
unsigned int i;
hash_t = malloc(sizeof(hash_table_t));
if (hash_t == NULL)
return (NULL);
array = malloc(sizeof(hash_node_t *) * size);
if (array == NULL)
return (NULL);
hash_t->size = size;
for (i = 0; i < size; i++)
{
array[i] = NULL;
}
hash_t->array = array;
return (hash_t);
}
