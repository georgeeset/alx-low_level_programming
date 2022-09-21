#include "main.h"

/**
 * *string_toupper - converts given string to upper case
 *
 * @str: given string
 * Return: the converted string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* check for lower case subtract 32 */
		if (str[i] > 96 && str[i] < 123)
			*(str + i) = str[i] - 32;
	}
	return (str);
}
