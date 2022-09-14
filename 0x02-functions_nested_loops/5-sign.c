#include "main.h"

/**
 * print_sign - check if input number is possitive or negative or zero
 *
 * @n: The input number.
 *
 * Return: 1 if n is greater than zero. 0 if zero.
 * -1 if n is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
