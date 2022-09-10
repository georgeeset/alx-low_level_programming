#include <stdio.h>

/**
 * main - print numbers in base 10
 *
 * Return: always return zero
 */
int main(void)
{
	unsigned char digit = 0;

	for (digit = 0; digit <= 10; digit++)
	{
		printf("%d", digit);
	}
	putchar('\n');
	return (0);
}
