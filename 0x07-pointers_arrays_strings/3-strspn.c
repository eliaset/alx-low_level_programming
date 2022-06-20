#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c, n;
	n = 0;

	for (i = 0; i < accept[i] != '\0'; i++)
	{
		c = 0;
		for (j = 0; j < s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				n++;
				c = 1;
			}
		}
		if (c == 0)
		{
			return (n);
		}
	}
	return (n);
}
