#include "main.h"

/**
 * _isalpha - returns 1 if the input is an alphabet
 * else 0 will be returned
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for alphabets and 0 for others.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
