#include "main.h"

/**
 * print_square - print sqare followed by nre line
 * @size: size of sqare to be printed
 * Return: void
*/

void print_square(int size)
{
	int v;
	int h;

	if (size > 0)
	{
		for (v = 1; v <= size; v++)
		{
			for (h = 1; h <= size; h++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
