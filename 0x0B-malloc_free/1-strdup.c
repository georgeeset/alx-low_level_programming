#include "main.h"

/**
 * _strdup - returns a pointer to a duplicated string.
 * @str: string to duplicate
 * Return: Null if str is null or address if successful
 */

char *_strdup(char *str)
{
	char *k;
	unsigned int i = 0;
	unsigned int j;

	if (str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
		i++;

	k = (char *) malloc(i * sizeof(char));

	if (k == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		*(k + j) = *(str + j);
	}
	*(k + j) = '\0';
	return (k);
}
