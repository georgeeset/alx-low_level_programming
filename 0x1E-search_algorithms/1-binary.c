#include "search_algos.h"

/**
 * recursive_breaker - Recursively break the array till the
 * desired number is found
 *
 * @array: input array
 * @size: size of array
 * @value: value to search for
 * Return: index of found number or -1
 */
int recursive_breaker(int *array, size_t size, int value)
{
	size_t half = size / 2;

	if (array == NULL || size == 0)
		return (-1);

	print_update(array, size);

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_breaker(array, half, value));

	half++;

	return (recursive_breaker(array + half, size - half, value) + half);
}

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: value is not present in array or if array is NULL retun -1
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_breaker(array, size, value);

	if (index)
		return (array[index] == value ? index : -1);
	return (-1);
}

/**
 * print_update - print the updated array list
 *
 * @size: size of the array to print
 * @array: lis of integer
 * Return: void
 */

void print_update(int *array, size_t size)
{
	size_t i;

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");
}
