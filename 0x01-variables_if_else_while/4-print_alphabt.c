#include <stdio.h>

/**
 * main - print all lower case alphabets except q and e
 * Return: always return 0
 *
 */
int main(void)
{
	unsigned char alpha = 0;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
