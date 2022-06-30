#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  allocate memory for an array, using malloc
 * @nmemb: an array of size bytes
 * @size: no of bytes
 * Return: pointer to the new string created (Success), or NULL (Error)
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *tmp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tmp = malloc(sizeof(char) * nmemb + 1);
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		tmp[i] = 0;
	return (tmp);
}
