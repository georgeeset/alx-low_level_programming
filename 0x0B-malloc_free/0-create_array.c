#include "main.h"

/**
 * create_array - returns pointer to the starting address of a char array
 * @size: the size of array to be created
 * @c: initial data to fill in array to avoid reading random data.
 * Return: pointer to crated char array or null if size of array is 0.
 */

char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;

	if (size == 0)
		return (NULL);

	k = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		*(k + i) = c;
	}
	*(k + i) = '\0';
	return (k);
}
