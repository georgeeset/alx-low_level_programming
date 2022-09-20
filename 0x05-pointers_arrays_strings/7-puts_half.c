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
	for ( x = count / 2; x < count; x++)
	{
		_putchar(str[x]);
	}
}
