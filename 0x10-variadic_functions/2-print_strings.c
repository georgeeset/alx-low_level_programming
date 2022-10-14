#include "variadic_functions.h"

/**
 * print_strings - prints string followed by a new line
 * @separator: is thr string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: returns nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strlist;
	char *ram;

	va_start(strlist, n);
	for (i = 0; i < n; i++)
	{
		ram = va_arg(strlist, char*);
		if (ram)
			printf("%s", ram);
		else
			putchar('\0');
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	putchar('\n');
	va_end(strlist);
}
