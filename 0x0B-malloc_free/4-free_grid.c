#include "main.h"

/**
 * free_grid - free up two dimensional memory space given the width and height
 * @grid: the address of the tow dimensional grid
 * @height: address height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(*(grid + i));
}
