#include "main.h"

/**
 * main - prints _putchar followed by new line
 *
 * Return: always returns zero
 *
 */

int main(void)
{
	unsigned char message[8] = "_putchar";
	unsigned int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(message[i]);
	}
	_putchar('\n');
	return (0);
}
