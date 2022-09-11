#include <stdio.h>

/**
 * main - software is eating the world
 *
 * prnt all possible combination of two two-digit numbers
 *
 * Return: zero
 */
int main(void)
{
	unsigned char fst = 0;
	unsigned char sec = 1;

	while (fst < 99)
	{
		while (sec < 100)
		{
			putchar((fst / 10) + 48);
			putchar((fst % 10) + 48);
			putchar(' ');
			putchar((sec / 10) + 48);
			putchar((sec % 10) + 48);
			sec++;
			if (sec == 98 && fst == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
		fst++;
		sec = fst + 1;
	}
	return (0);
}
