#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of arguments
 * Return: return sumed arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list items;

	va_start(items, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(items, unsigned int);
	}
	va_end(items);
	return (sum);
}
