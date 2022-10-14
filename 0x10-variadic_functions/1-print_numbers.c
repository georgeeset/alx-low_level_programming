#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: character to be printed between numbers
 * @n: number of intigers to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list num;

	va_start(num, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	putchar(10);
	va_end(num);
}
