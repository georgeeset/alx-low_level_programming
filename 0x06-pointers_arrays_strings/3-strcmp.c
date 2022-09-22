#include "main.h"

/**
 * _strcmp - compare ascii weight of two string
 *
 * @s1: first string to compare
 * @s2: second string to compare with s1
 * Return: integer +ve or -ve (s1-s2)
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int diff = 0;

	/**
	 * scan through both strings and subtract each
	 * exit the loop when subtraction result is not zero
	 */

	for (x = 0; (s1[x] != '\0') && (s2[x] != '\0'); x++)
	{
		diff = s1[x] - s2[x];
		if (diff != 0)
			break;
	}
	return (diff);
}
