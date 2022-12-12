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
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
