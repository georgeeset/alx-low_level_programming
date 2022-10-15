#include "variadic_functions.h"

/**
 * print_all - prints all type of variable passed to it
 * @format: synmbol that indicates the data type to be printed
 * Returns: void
 */

void print_all(const char * const format, ...)
{
	va_list  data;
	int i = 0;
	char *str;

	va_start(data, format);

	while (format[i] != '\0')
	{
		if (i > 8)
			break;
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
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		i++;
		if (format[i] != '\0' && i > 0 && i < 9)
			printf(", ");
	}
	putchar(10);
}
