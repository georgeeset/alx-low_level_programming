#include "main.h"

/**
 * puts_half - print second half of a string
 *
 * @str: string to be printed
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int count = 0;
	int x = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
		x = (count - 1) / 2;
	else
		x = count / 2;

	for (; x < count; x++)
	{
		_putchar(str[x]);
	}
	_putchar(10);
}
