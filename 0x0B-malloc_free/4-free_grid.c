#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this frres the memory allocated without any allocation lost
 * @grid: first parametr allocated to be freed
 * @height: size of the array
 * Retunr: Always 0 Success
 */
void free_grid(int **grid, int height)
{
	int len1;

	for (len1 = 0; len1 < height; len1++)
	{
		free(grid[len1]);
	}
	free(grid);
}
