#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free memory
 * @grid: 2 dimensional array
 * @height: height of the array
 * return: Always 0
 */
void free_grid(int **grid, int height)
{
	int linda;

	for (linda = 0; linda < height; linda++)
		free(grid[linda]);
	free(grid);

}
