#include "main.h"

void print_bin(unsigned long int n);

/**
 * print_binary - print binary representation of a number
 * @n: number to be converted
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(48);
	else
		print_bin(n);
}


/**
 * print_bin - pirnts binary representation of the given integer
 * @n: intiger given
 * Return: nothing
 */
void print_bin(unsigned long int n)
{
	unsigned long int p = 0, k = 0x01;

	if (n == 0)
		return;

	print_bin(n >> 1);
	p = k & n;
	_putchar(p + 48);
}
