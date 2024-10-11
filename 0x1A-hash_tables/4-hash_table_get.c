#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_get - function that retrieves a value associated with a key
 *@ht: hash table
 *@key:the key to looking for
 *Return: the value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
if (ht == NULL || key == NULL)
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size || ht->array[index] == NULL)
return (NULL);
while (ht->array[index] != NULL)
{
if (strcmp(ht->array[index]->key, key) == 0)
return (ht->array[index]->value);
ht->array[index] = ht->array[index]->next;
}
return (NULL);
}
