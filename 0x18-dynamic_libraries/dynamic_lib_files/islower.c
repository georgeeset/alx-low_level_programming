#include "main.h"

/**
 * _islower - compare values to and state th lower value
 *
 * @c: the ASCII code to be checked
 *
 * Return: returns 1 if input c is in lower case and 0 if in higher case
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
