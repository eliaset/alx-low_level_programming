#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates a 2d integer grid
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to grid or null
 **/
int **alloc_grid(int width, int height)
{
	int **tmp;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	tmp = malloc(sizeof(int *) * height);

	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tmp[i] = malloc(sizeof(int) * width);
		if (tmp[i] == NULL)
		{
			free(tmp);
			for (j = 0; j <= i; j++)
				free(tmp[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tmp[i][j] = 0;
		}
	}
	return (tmp);
}
