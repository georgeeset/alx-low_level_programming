#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointe to hash table
 * @key: string containing the key
 *
  * Return: the value associated with the element
 * or null if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *index_list;
	unsigned long int size;
	hash_node_t *pointer;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);
	size = ht->size;

	index_list = ht->array[key_index((unsigned char *)key, size)];

	pointer = index_list;
	if (!index_list)
		return (NULL);
	while (pointer)
	{
		if (strcmp(pointer->key, key) == 0)
			return (pointer->value);
		pointer = pointer->next;
	}
	return (NULL);

}
