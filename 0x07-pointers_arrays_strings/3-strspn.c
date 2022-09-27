#include "main.h"

/**
 * _strspn - get length of a prefix substring.
 * count howmany characters till one character
 * from search string is found in the given string
 *
 * @s: source string where we need to find accept
 * @accept: string to find
 *
 * Return: integer; length counted before char s
 * was found in accept string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (*(accept + i) != '\0')
	{
		for (j = 0; *(s + j) != '\0'; j++)
		{
			if (*(s + j) == *(accept + i))
				return (j + 1);
		}
		i++;
	}
	return (0);
}
