#include "main.h"

/**
 * _strchr - returns address to a given character which
 * is found in a given string.
 *
 * @s: the given string
 * @c: the given character to find in s
 *
 * Return: location of c if found or NULL if not found
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (&*(s + i));
		}
	}

	if (*(s + 1) == c)
		return (&*(s + 1));
	return ('\0');
}
