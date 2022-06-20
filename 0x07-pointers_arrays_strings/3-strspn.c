#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c = 0;
	int n = 0;

	for (i = 0; i < accept[i] != '\0'; i++)
	{
		for (j = 0; j < s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				n++;
				c = 1;
			}
		}
		if (c == 0)
			return (n);
	}
	return (n);
}
