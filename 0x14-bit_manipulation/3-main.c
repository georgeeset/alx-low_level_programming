#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n;
	int res;

	n = 1024;
	res = set_bit(&n, 5);
	printf("%lu res %i\n", n, res);
	n = 0;
	res = set_bit(&n, 10);
	printf("%lu res %i\n", n, res);
	n = 98;
	res = set_bit(&n, 0);
	printf("%lu res %i\n", n, res);
	n = 0;
	res = set_bit(&n, 99);
	printf("%lu res %i\n", n, res);
	return (0);
}
