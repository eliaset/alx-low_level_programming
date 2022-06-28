#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstotmp - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: Pointer to the new tmping (Success), NULL (Error)
 */
char *argstotmp(int ac, char **av)
{
	int i, j, k, l;
	char *tmp;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}

	tmp = malloc(sizeof(char) * (l + 1));

	if (tmp == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			tmp[k] = av[i][j];
			k++;
		}
		tmp[k] = '\n';
		k++;
	}

	return (tmp);
}
