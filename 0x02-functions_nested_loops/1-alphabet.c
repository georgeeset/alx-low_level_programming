#include "main.h"

/**
 * print_alphabet - wirte the the lower-case alphabet on a line.
 *
 *
 *
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
