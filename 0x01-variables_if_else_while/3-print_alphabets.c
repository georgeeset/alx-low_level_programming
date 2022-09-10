#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: always zero
*/
int main(void)
{
	unsigned char n = 0;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar("/n");
	return (0);
}
