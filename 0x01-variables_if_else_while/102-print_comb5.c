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
	unsigned int fst = 0;
	unsigned int sec = 0;

	while (fst < 99)
	{
		while (sec < 100)
		{
			if(fst == 0 && sec == 0)
			{
				sec++;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			putchar((fst / 10) + 48);
			putchar((fst % 10) + 48);
			putchar(' ');
			putchar((sec / 10) + 48);
			putchar((sec % 10) + 48);
			sec++;
		}
		fst++;
		sec = fst + 1;
	}
	putchar(10);
	return (0);
}
