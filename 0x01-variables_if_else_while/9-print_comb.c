#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers
 *
 * Return: zero will be returned
 */

int main(void)
{
	unsigned int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i+48);
		if (i<9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
