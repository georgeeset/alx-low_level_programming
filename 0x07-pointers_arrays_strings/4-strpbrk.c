#include "main.h"

/**
 * _strpbrk - function searches for any of a set of bytes
 * locate the first occurrence in the string of any bytes
 * in the string accept.
 *
 * @s: source string to search
 * @accept: search keyword string (set of bytes)
 *
 * Return: a pointer to the byte in s that matches one
 * of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
