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

	while (*(str + i) != '\0')
		i++;
	if (i == 0)
		return (NULL);

	k = (char *) malloc(i * sizeof(char));

	if (k == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		*(k + j) = *(str + j);
	}
	return (k);
}
