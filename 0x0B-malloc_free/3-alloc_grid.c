#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - pointer to a 2 dimensional array of integers
 * @width: column
 * @height: row
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			while (i >= 0)
				free(matrix[i--]);
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < height; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
