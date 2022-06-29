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
	int i, j;
	int **tmp;

	if (width <= 0 || height <= 0)
	{
		free(tmp);
		return (NULL);
	}
	tmp = malloc(sizeof(int) * height);
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tmp[i] = malloc(sizeof(int) * width);
		if (tmp == NULL)
		{
			free(tmp);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			tmp[i][j] = 0;
		}
	}
	return (tmp);
}
