#include "main.h"

/**
 * _puts_recursion - prints a given string followed by a new line
 *
 * @s: given string to print
 *
 * Return: always return void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
