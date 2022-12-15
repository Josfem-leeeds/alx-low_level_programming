#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers initialised with 0
 * @width: the first integer parameter
 * @height: the second integer parameter
 * Return: returns a pointer to 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int size1, size2, size3, size4;
	int **ret;

	if (width <= 0 || height <= 0)
		return (NULL);
	ret = malloc(height * sizeof(int *));
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	for (size1 = 0; size1 < height; size1++)
	{
		ret[size1] = malloc(width * sizeof(int));
		if (ret[size1] == NULL)
		{
			for (size2 = size1; size2 >= 0; size2--)
			{
				free(ret[size2]);
			}
			free(ret);
			return (NULL);
		}
	}

	for (size3 = 0; size3 < height; size3++)
	{
		for (size4 = 0; size4 < width; size4++)
			ret[size3][size4] = 0;
	}
	return (ret);
}
