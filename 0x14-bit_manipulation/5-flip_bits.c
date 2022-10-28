#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first value
 * @m: second value to compare
 * Return: number of flips needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, j = 0;
	unsigned long int k = 1;

	while (n > 0 || m > 0)
	{
		if (j > 0)
		{
			n = n >> 1;
			m = m >> 1;
		}
		else
			j++;

		if ((k & n) != (k & m))
			i ++;
	}
	return (i);
}
