#include "main.h"

/**
 * _memset - function fills memory with constant byte b in n times
 * @s: memory to be filled with byte
 * @b: byte to be written in s memory
 * @n: number of b to write in s memory
 * Return: char memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
