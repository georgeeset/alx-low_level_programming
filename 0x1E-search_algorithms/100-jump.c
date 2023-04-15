#include "search_algos.h"

/**
 * recursive_jump - recursively jump through array to find value
 *
 * @array: array to scan
 * @size: size of array
 * @position: the current search cursor position
 * @k: jump step while scanning. sqrt(size)
 * @value: the value we are searcing for
 * @s: lower index range where value was found
 * Return: void
 */

void recursive_jump(int *array, size_t size,
		   size_t position, size_t k, int value, size_t *s)
{

	if (*(array + position) >= value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
		       position - k, position);
		*s = position - k;
		return;
	}

	if (position < size)
	{

		printf("Value checked array[%lu] = [%d]\n",
		       position, *(array + position));
		recursive_jump(array, size, position + k, k, value, s);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       position - k, position);
	*s = position - k;
}

/**
 * jump_search - searches for a value in a sorted
 * array of integers using the Jump search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: value if present in the array or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t s = 0, i, k = 0;

	if (!array || size == 0)
		return (-1);

	k = sqrt(size);

	recursive_jump(array, size, 0, k, value, &s);

	/*for (i = s; (i < size) && (i <= (s + k)); i++)*/
	for (i = s; (i < size); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
