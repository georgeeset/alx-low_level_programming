#include <stdio.h>

/**
 * main - print series of unique numbers 1-100
 *
 * Return: always returns 0
 */

int main(void)
{
	unsigned int xlim;
	unsigned int ylim;
	unsigned int x;

	for (xlim = 9; xlim > 0; xlim--)
	{
		x = 9 - xlim;
		for (ylim = 10 - xlim; ylim < 10; ylim++)
		{
			putchar(x + 48);
			putchar(ylim + 48);
			if (ylim == 9 && x == 8)
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
	putchar(10);
	return (0);
}
