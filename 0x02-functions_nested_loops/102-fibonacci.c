#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int first, second, third;
	int count;

	first = 1;
	second = 2;
	printf("%lu, %lu", first, second);
	for (count = 2; count < 50; count++)
	{
		third = first + second;
		first = second;
		second = third;
		printf(", %lu", third);
	}
	putchar(10);
	return (0);
}
