#include "main.h"

/**
 * alloc_grid - generate dynamic two dimenaional array
 * @width: lwngth of each array
 * @height: number of arrays in list
 * Return: null if:
 * operation fails,
 * either height or width is zero
 * Else. address to array will be returned
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **mem;

	if (width <= 0 || height <= 0)
		return (NULL);
	mem = (int **) malloc(height * sizeof(int *));
	if (mem == NULL)
	{
		free(mem);
	}
	for (i = 0; i < height; i++)
	{
		*(mem + i) = (int *) malloc(width * sizeof(int));
		if (*(mem + i) == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(*(mem + i));
			}
			free(mem);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			mem[i][j] = 0;
		}
	}
	return (mem);
}
