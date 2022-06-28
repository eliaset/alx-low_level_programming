#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @c: char
 * @size: the size of the memory to print
 *
 * Return: value of NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tmp;

	tmp = malloc(sizeof(char) * size);
	if (size > 0)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		else
		{
			tmp[i] = c;
		}
		return (tmp);
		free(tmp);
	}
	else
	{
		return ('\0');
	}
}
