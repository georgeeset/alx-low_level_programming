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

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (&*(s + i));
		}
		i++;
	}

	return (NULL);
}
