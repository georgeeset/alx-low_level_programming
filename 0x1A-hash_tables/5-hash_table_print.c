#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 * Return: NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array_list;
	unsigned long int i;
	hash_node_t *ptr;
	int has_printed = 0;

	if (!ht)
		return;
	array_list = ht->array;
	if (!array_list)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (array_list[i])
		{
			ptr = array_list[i];

			while (ptr)
			{
				if (has_printed)
					printf(", ");
				else
					has_printed = 1;
				printf("\'%s\': \'%s\'", ptr->key, ptr->value);

				ptr = ptr->next;
			}
		}
	}
	printf("}\n");
}
