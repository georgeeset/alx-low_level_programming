#include "main.h"

/**
 * print_to_98 - Prints numbers from a given number to 98
 *
 * @n: int starting point
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			if (n > 99)
			{
				_putchar((n / 100) + 48);
				_putchar(((n % 100) / 10) + 48);
				_putchar(((n % 100) % 10) +48);
			}
			else
			{
				if (n > 9)
				{
					_putchar((n / 10) + 48);
				}
				else
				{
					_putchar(' ');
					
				_putchar((n % 10) + 48);
			}
				_putchar(',');
				_putchar(' ');
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			if (n < 0)
			{
				_putchar('-');
				n = n * -1;
			}
			if (n > 9)
			{
				_putchar((n / 10) + 48);
			}
			else if (n >= 0)
			{
				_putchar(' ')
			}
			_putchar((n % 10) + 48);
			_putchar(' ');
		}
	}
//	printf("%d\n", n);
}
