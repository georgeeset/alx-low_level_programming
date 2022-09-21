#include "main.h"

/**
 * reverse_array - return a recersed string
 *
 * @a: given array pointed
 * @n: length of given array
 *
 * Return: return void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	/*
	 *store one int in temp while transfering to
	 *another position
	 */
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		*(a + i) = a[n - 1 - i];
		*(a + (n - 1 - i)) = temp;
	}

}
