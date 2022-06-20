#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k;
	int l;
	int n = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (accept[j] != '\0')
	{
		j++;
	}
	for (k = 0; k < j; k++)
	{
		for (l = 0; l < i; l++)
		{
			if (accept[k] == s[l])
			{
				n++;
			}
		}
	}
	return (n);
}
