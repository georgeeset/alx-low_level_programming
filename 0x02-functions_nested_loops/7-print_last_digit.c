#include "main.h"

/**
 * print_last_digit - return last digit
 * of a giben number.
 *
 * @n: input integer.
 *
 * Return: returns last digit.
 */

int print_last_digit(int n)
{
	int l;

	if (n >= 0)
	{
		l = n % 10;
		_putchar(l + 48);
		return (l);
	}
	else
	{
		l = n % -10;
		_putchar(l + 48);
		return (l);
	}
}
