#include "main.h"

/**
 * more_numbers - prints numbers 1-14
 * in new lines repeatedly 10 times
 *
 * Return: returns void
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j <= 10)
	{
		while (i <= 14)
		{
			if (i > 9)
				_putchar((i / 10) + 48);

			_putchar((i % 10) + 48);
			i++;
		}
		_putchar(10);
		i = 0;
		j++;
	}
}
