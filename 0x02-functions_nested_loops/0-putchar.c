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

	for (i = 0; i < 9; i++)
	{
		_putchar(message[i]);
	}
	return (0);
}
