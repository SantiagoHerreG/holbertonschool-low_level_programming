#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - leberates the memory from the heap
 * @grid: pointer to an array of pointers (to liberate)
 * @height: number of pointers in the array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);

	free(grid);
}
