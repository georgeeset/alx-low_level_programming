#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 * of integer followed by  a new line
 *
 * @a: pointer to the array to be printed
 * @n: the element of array to be printed
 *
 * return void
 */

void print_array(int *a, int n)
{
	int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		printf("%d", *(a + cnt));
		if (cnt != (n - 1))
			printf(", ");
	}
	printf("\n");
}
