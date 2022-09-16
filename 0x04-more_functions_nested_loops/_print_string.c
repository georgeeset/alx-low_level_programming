#include "main.h"

/**
 * _print_string - prints string to screen
 * 
 * Return: void
 */

void _print_string(char data[])
{
	int i;
	int size = sizeof(data) / sizeof(data[0]);
	for (i = 0; i <= size; i++)
	{
		_putchar(data[i]);
	}
}
