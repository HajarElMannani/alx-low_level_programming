#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_set - function that adds an element to the hash table.
 *@ht: the hash table to add the key/value to
 *@key: the key.
 *@value: the value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node;

if (ht == NULL || strcmp(key, "") == 0 || key == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
if (ht->array[index] && strcmp(ht->array[index]->key, key) == 0)
{
free(ht->array[index]->value);
ht->array[index]->value = strdup(value);
return (1);
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}

