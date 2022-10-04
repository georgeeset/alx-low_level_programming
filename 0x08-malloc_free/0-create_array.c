#include "main.h"

/**
 * create_array - returns pointer to the starting address of a char array
 * @size: the size of array to be created
 * @c: initial data to fill in array to avoid reading random data.
 * Return: pointer to crated char array.
 */

char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;

	k = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		*(k + i) = c;
	}
	*(k + i) = '\0';
	return (k);
}
