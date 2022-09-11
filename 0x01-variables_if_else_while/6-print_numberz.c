#include <stdio.h>

/**
 * main - print all single digit numbers of base 10
 *
 * Return: always return 0
 */

int main(void)
{
	unsigned int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
