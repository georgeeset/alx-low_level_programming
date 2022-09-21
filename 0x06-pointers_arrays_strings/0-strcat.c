#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatinate two strings together
 *
 * @dest: the contanicated string goes here
 * @src: one part of the string to be concatinated
 * Return: contatinated string.
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	
	/* count the length of dest and src*/
	do
		destlen++;
	while (dest[destlen] != '\0');

	do
	{
		srclen++;
		*(dest + destlen + srclen) = src[srclen];
	}
	while (src[srclen] != '\0');
	return dest;
}
