#include "main.h"

/**
 * _strstr - locates a substring. Find the first occurrence
 * of the substring
 *
 * @haystack: source string where we search
 * @needle: the substring we want to find
 *
 * Return: pointer to the begining of the located substring
 * or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, found, start;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(i + haystack) == *(needle + 0))
		{
			/*printf("first character found at %d\n", i);*/
			start = i;
			for (j = 0; *(needle + j) != '\0'; j++)
			{
				if (*(i + j + haystack) == *(needle + j))
				{
					found = 1;
				}
				else
				{
					found = 0;
					break;
				}
			}
		}
	}
	if (found)
		return (haystack + start);
	return (NULL);
}
