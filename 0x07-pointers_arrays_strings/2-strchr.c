#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char to be searched
 * Return: value or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		 if (s[i] != c && s[i] == '\0')
		{
			return ('\0');
		}
	}
	return (0);
}
