#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table you want to add or update the key/value
 * @key: is the key. key can ot be an empty string
 * @value: is the value associated with the key. value must be duplicated
 * value can be an empty string
 * Return: 1 if it succeed, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = 0, *indx_node = 0;

	if (key == NULL)
		return (0);
	if (*key == '\n')
		return (0);

	if (ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	indx_node = (ht->array)[index];

	if (indx_node && !strcmp(indx_node->key, key))
	{
		free(indx_node->value);
		indx_node->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	(ht->array)[index] = new_node;
	new_node->next = indx_node;
	return (1);
}
