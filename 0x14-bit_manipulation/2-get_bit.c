#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: long integer of number
 * @index: index of n whose bit should be checked
 * Return: bit at index.. 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (n == 0)
		return (0);

	if (n > 63)
		return (-1);

	if (index == 0)
	{
		val = n & 0x01;
		return (val);
	}
	else
	{
		n = n >> index;
		val = n & 0x01;
		return (val);
	}
}
