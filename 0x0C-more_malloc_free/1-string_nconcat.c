#include "main.h"

/**
 * string_nconcat - allocate space in memory and concatinate s1
 * and n characters from s2
 * @s1: first string
 * @s2: second string
 * @n: int that will serve as stopper for s2
 * Return: pointer to the allocated memory. or
 * return null if opertion fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *k;
	unsigned int len1, len2, i, total;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; *(s1 + len1) != '\0'; len1++)
		;
	for (len2 = 0; *(s2 + len2) != '\0'; len2++)
		;
	if (n >= len2)
		n = len2;

	total = n + len1;
	k = malloc(total + 1);
	if (k == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
	{
		if (i < len1)
		{
			*(k + i) = *(s1 + i);
		}
		else
		{
			*(k + i) = *(s2 + (i - len1));
		}
	}

	*(k + i) = '\0';

	return (k);
}
