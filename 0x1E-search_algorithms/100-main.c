#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		4, 5, 9, 11, 17, 20, 21, 23, 24, 25
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 17, jump_search(array, size, 17));
	printf("Found %d at index: %d\n\n", 25, jump_search(array, size, 25));
	printf("Found %d at index: %d\n\n", 0, jump_search(array, size, 0));
	printf("Found %d at index: %d\n\n", 999, jump_search(array, 3, 999));
	printf("Found %d at index: %d\n\n", 5, jump_search(array, 2, 5));
	return (EXIT_SUCCESS);
}
