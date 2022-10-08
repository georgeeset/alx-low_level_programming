#include "main.h"

/**
 * _calloc - crate given bytes for an array.
 * @nmemb: number of elements in array.
 * @size: size of each data in array
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;

	return (mem);
}
