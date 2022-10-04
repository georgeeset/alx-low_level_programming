#include "main.h"

/**
 * str_concat - combines two strings and point to the new generated string
 * @s1: first string
 * @s2: second string
 * Return: pointer to combined string or null if string operation failed
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int x = 0;
	char *k;

	while (*(s1 + i) != '\0')
		i++;

	while (*(s2 + j) != '\0')
		j++;

	if ((i + j) == 0)
		return (NULL);

	k = (char *) malloc((i + j) * sizeof(char));
	if (k == NULL)
		return (NULL);

	for (; x < i; x++)
		*(k + x) = *(s1 + x); 

	for (; x < (j + i); x++)
		*(k + x) = *(s2 + (x - i));

	*(k + x) = '\0';

	return (k);
}
