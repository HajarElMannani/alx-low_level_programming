#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_print - function that prints a hash table.
 *@ht: the hash table to be printed
 *Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
short commaf = 0;
if (ht == NULL)
return;
printf("{");
for (i = 0; i <= ht->size; i++)
{
while (ht->array[i] != NULL)
{
if (commaf == 1)
printf(", ");
printf("\'%s\' : \'%s\'", ht->array[i]->key, ht->array[i]->value);
ht->array[i] = ht->array[i]->next;
commaf = 1;
}
}
printf("}\n");
}
