#include "main.h"

/**
 * _strncat - output concatinated string
 *
 * @dest: holds concatinated string
 * @src: holds one of the source string
 * @n: number of char to be added to dest from src
 * Return: concanited string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
