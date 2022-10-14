#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: character to be printed between numbers
 * @n: number of intigers to print
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list num;

	va_start(num, n);
	if ((seperator != NULL) && (n > 0))
	{
		while (i < (n - 1))
		{
			printf("%d%s", va_arg(num, int), seperator);
			i++;
		}
		printf("%d", va_arg(num, int));
	}
	va_end(num);
	if (n != 0)
		putchar(10);
}
