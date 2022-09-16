#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 *
 * @n: number of spaces before the diagonal line
 * Return: nothing
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 0; y <= x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
