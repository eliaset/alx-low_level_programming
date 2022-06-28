#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstotmp - prints args
 * @ac: takes in width of grid
 * @av: height of grid
 * Return: the args one line at a time
 */

char *argstotmp(int ac, char **av)
{
	char *tmp;
	int count = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count = count + ac + 1;
	tmp = malloc(sizeof(char) * count);
	if (tmp == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			tmp[c] = av[a][b];
			c++;
		}
		tmp[c] = '\n';
		c++;
	}
	return (tmp);
}
