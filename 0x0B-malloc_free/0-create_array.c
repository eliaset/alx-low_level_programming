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
	int i;
	char *tmp;

	tmp = malloc(sizeof(char) * size);
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			tmp[i] = c;
		}
		return (tmp);
	}
	else
	{
		return ('\0');
	}
}
