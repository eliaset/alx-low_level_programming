#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int m = strlen(src);
	int p = strlen(dest);

	for (int i = 0; i <= m; i++)
	{
		dest[i + p] = src[i];
	}
	return (dest);
}
