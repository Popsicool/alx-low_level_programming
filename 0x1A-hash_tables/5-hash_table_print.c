#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table to be printed
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	unsigned char flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag)
				printf(", ");
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				printf("'%s': '%s'",
						current_node->key,
						current_node->value);
				current_node = current_node->next;
				if (current_node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}

	printf("}\n");
}
