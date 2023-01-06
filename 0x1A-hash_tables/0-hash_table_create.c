#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: pointer to the newly created array or NULL
 * if any thing goes wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = calloc(size, sizeof(hash_node_t *));
	if (array == NULL)
		return (NULL);

	table->array = array;
	table->size = size;
	return (table);
}
