#include "main.h"

/**
 * print_line - prints n number of underscores to make a line
 * @n: numbre of underscores to print
 *
 * REturns: nothing
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(10);
		return;
	}
	else
	{
		for (; n >= 0; n--)
		{
			_putchar('_');
		}
	}
	_putchar(10);
}
