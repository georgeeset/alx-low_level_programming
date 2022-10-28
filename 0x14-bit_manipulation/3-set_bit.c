#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 for a given index
 * @n: value to be updated
 * @index: index of n to be updated.
 * Return: 1 if succes or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k, j;

	if (index > 63 || n == NULL)
		return (-1);
	k = 0x01;
	k = k << index;
	j = *n;
	*n = j | k;
	return (1);
}
