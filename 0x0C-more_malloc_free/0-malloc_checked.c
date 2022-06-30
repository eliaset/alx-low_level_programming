#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: integer
 * Return: pointer to grid or null
 **/
void *malloc_checked(unsigned int b)
{
	unsigned int *tmp;

	tmp = malloc(b);
	if (tmp == NULL)
	{
		return (98);
	}
	return (tmp);
}
