#include <main.h>

/**
 * *_memset - fill memory with a constant byte
 * @s: the address of memory to filled
 * @n: the size of the memory to filled
 * @b: the constant value to be filled
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
