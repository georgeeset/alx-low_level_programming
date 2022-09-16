#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, fct;

	n = 612852475143;
	for (fct = 2; fct <= n; fct++)
	{
		if (n % fct == 0)
		{
			n /= fct;
			fct--;
		}
	}
	printf("%ld\n", fct);
	return (0);
}
