#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10 times
*
* Return: void
*/

void print_alphabet_x10(void)
{
	unsigned int count = 0;
	unsigned char a = 'a';

	while (count < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		count++;
		a = 'a';
	}
}
