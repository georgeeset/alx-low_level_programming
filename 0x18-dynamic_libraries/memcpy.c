#include "main.h"

/**
 * _memcpy - copy memory area from *src to *dest
 *
 * @n: number of bytes to be copied
 * @dest: destination of copied bytes
 * @src: source of bytes to be copied
 *
 * Return: returns copied data dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
