#include "main.h"

/**
 * recursion_detection - detect if number is prime or not
 * @num: number to test
 * @div: divider integer
 */

int recursion_detection(int num, int div)
{
	if (div == 10)
		return (1);
	if (num == 1)
		return (0);
	if ((num % div) == 0)
		return (0);
	return (recursion_detection(num, div + 1));
}

/**
 * is_prime_number - return 1 or 0 if a given number is prime or not
 *
 * @n: given number
 *
 * Return: int 0 or 1
 */

int is_prime_number(int n)
{
	if (n < 0)
		n *= -1;
	return (recursion_detection(n, 2));
}
