#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function to creat hash table
 * @size: size of the hash table
 * Return: pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
