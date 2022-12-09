#include <stdio.h>

/**
 * swap - invert number from left to right. so 123 becomes 321
 * @n: number to be swapped
 * Return: swipped number
 */

int swap(int n)
{
	int m = 0;

	while (n > 0)
	{
		m = m * 10 + n % 10;
		n = n / 10;
	}
	return (m);
}

/**
 * main - find the largest palindrome made from the product of two 3-digit
 * numbers
 * Return: always return 0
 */

int main(void)
{
	int greatest = 0;

	for (int i = 100; i <= 999; i++)
	{

		for (int j = 100; j <= 999; j++)
		{
			if (i * j == swap(i * j) && i * j > greatest)
				greatest = i * j;
		}
	}
	printf("%i", greatest);
	return (0);
}
