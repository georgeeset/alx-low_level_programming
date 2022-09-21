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
	int s1count = 0;
	int s2count = 0;
	
	/* get ascii count of s1 */
	while (s1[x] != '\0')
	{
		s1count += s1[x];
		x++;
	}

	/* get count of s2*/
	x = 0;
	while (s2[x] != '\0')
	{
		s2count += s2[x];
		x++;
	}
	/* subtract s2 from s1 */
	return (s1count - s2count);
}
