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
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
