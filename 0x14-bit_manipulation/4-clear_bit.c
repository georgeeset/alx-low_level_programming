#include "main.h"

/**
 * clear_bit - set the value of a bit to 0
 * @n: the number to be changed
 * @index: index of n to be cleared;
 * Return: 1 if successful or 0 if failed;
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (n == NULL || index > 63)
		return (-1);

	k = 0x01 << index;
	k = ~k;
	*n &= k;
	return (1);
}
