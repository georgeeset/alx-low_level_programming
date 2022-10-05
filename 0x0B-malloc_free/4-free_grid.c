#include "main.h"

/**
 * free_grid - free up two dimensional memory space given the width and height
 * @grid: the address of the tow dimensional grid
 * @height: address height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;
	for (; height >= 0; height--)
		free(*(grid + height));
}
