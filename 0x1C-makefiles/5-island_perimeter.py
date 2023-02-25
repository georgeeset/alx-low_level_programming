#!/usr/bin/python3
"""the module contains a function island_perimeter"""


def island_perimeter(grid):
    """A functio that returns the perimeter of the island described in grid
    args:
    grid - a list of integers with 0 and 1
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is
    one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected
    to the water around the island).
    """
    island = 0
    for y, row in enumerate(grid):
        for x, cell in enumerate(row):
            if cell == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    island += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    island += 1
                if x == 0 or grid[y][x - 1] == 0:
                    island += 1
                if x == len(row) - 1 or grid[y][x + 1] == 0:
                    island += 1
    return island
