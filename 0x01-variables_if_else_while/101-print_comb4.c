#include <stdio.h>

/**
 * main - print series of unique numbers 1-100
 *
 * Return: always returns 0
 */

int main(void)
{
	unsigned int wlim;
	unsigned int xlim;
	unsigned int ylim;
	unsigned int x;

	for (wlim = 0; wlim < 8; wlim++)
	{

		for (xlim = 8; xlim > 0; xlim--)
		{
			x = 9 - xlim + wlim;
			for (ylim = 10 - xlim + wlim; ylim < 10; ylim++)
			{
				putchar(wlim + 48);
				putchar(x + 48);
				putchar(ylim + 48);
				if (wlim == 7 && ylim == 9 && x == 8)
				{
					continue;
				}
				else
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
