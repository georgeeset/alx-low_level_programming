#include "main.h"

/**
 * malloc_checked - allocate memory using malloc and return its address
 * @b:bytes to be allocated
 * Return: pointer to memory location or error value 98
 */

void *malloc_checked(signed int b)
{
	char *c;

	c = (char *)malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
