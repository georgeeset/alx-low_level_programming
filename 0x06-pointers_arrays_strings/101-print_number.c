#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	int i, j, k;

	/* indicate negative value and convert to possitive */
	if (n < 0)
	{
		_putchar(45);
		n *= -1;
	}

	/* simply print 0 if n is 0 */
	if (n < 10)
	{
		_putchar(n + 48);
		return;
	}

	/* get the range of n so we can tell how to brake it down */
	k = 1;
	do {
		j = n / k;
		k *= 10;
	} while (j > 99);

	/*printf("%d size of k\n", k);*/

	/*this is where we break it down */
	i = n;
	for (; k >= 1; k /= 10)
	{
		_putchar((i / k) + 48);
		i = i % k;
	}
}
