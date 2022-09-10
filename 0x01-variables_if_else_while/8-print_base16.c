#include <stdio.h>

/**
 * main - print hexadecimal numbers 1 to f
 *
 * Return: zero is the number
 */

int main(void)
{
	unsigned char hx;

	for (hx = 48; hx < 63; hx++)
	{
		if (hx > 57)
		{
			putchar(hx + 40);
		}
		else
		{
			putchar(hx);
		}
	}
	putchar(10);
	return (0);
}
