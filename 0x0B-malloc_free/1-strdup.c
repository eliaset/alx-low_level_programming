#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates an array of chars
 * @str: string to be copied
 * Return: value of NULL.
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *tmp;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	if (j > 0)
	{
		tmp = malloc(sizeof(str));
		if (str == NULL)
		{
			return ('\0');
		}
		else
		{
			for (i = 0; i < j; i++)
			{
				tmp[i] = str[i];
			}
			tmp[i] = '\0';
			return (tmp);
			free(tmp);
		}
	}
	else
	{
		return ('\0');
	}
}
