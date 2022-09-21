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
	int srclen = 0;
	int destlen = 0;

	do
		destlen++;
	while (dest[destlen] != '\0');

	do {
		*(dest + destlen + srclen) = src[srclen];
		srclen++;
	} while ((src[srclen - 1] != '\0') && (srclen < n));

	return (dest);
}
