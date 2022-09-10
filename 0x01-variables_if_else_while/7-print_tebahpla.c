#include <stdio.h>

/**
 * main - print alphabets in reverse
 *
 * Return: always zero
 */
int main(void)
{
	unsigned char x;

	for (x = 122; x >= 97; x--)
	{
		putchar(x);
	}
	putchar(10);
	return (0);
}
