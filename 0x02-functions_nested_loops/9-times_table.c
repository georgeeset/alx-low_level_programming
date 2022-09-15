#include "main.h"

/**
 * times_table - displays the multiplication table of 9
 *
 * Returns: void
 *
 */

void times_table(void)
{
	int inc = 0;
	int h = 0;
	int v = 0;
	int i;

	for (h = 0; h <= 9; h++)
	{
		for (inc = 0; inc <= 9; inc++)
		{
			if (inc > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			i = inc * h;
			if (i > 9)
			{
				_putchar((i / 10) + 48);
			}
			else if (inc > 0)
			{
				_putchar(' ');
			}
			_putchar((i % 10) + 48);
		}
			_putchar(10);
	}
	v++;
}
