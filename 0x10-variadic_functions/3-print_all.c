#include "variadic_functions.h"

/**
 * print_all - prints all type of variable passed to it
 * @format: synmbol that indicates the data type to be printed
 * Returns: void
 */

void print_all(const char * const format, ...)
{
	va_list  data;
	int i = 0, unknown = 0;
	char *str;

	va_start(data, format);

	while (format[i] != '\0' && i < 9 + unknown)
	{
		switch (format[i])
		{
		case 'i':
			printf("%d", va_arg(data, int));
			break;
		case 'f':
			printf("%f", va_arg(data, double));
			break;
		case 'c':
			printf("%c", va_arg(data, int));
			break;
		case 's':
			str = va_arg(data, char *);
			printf("%s", str == NULL ? "(nil)" : str);
			break;
		default:
			i++;
			unknown++;
			continue;
		}
		i++;
		if (format[i] != '\0' && i > 0 && i < (9 + unknown))
			printf(", ");
	}
	putchar(10);
	va_end(data);
}
