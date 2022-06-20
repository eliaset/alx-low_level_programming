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

	while (s[i] != '\0')
        {
                if (s[i] == c)
                {
                        return (s + i);
                }
                if (s[i] == c)
                        return (s + i);
                i++;
        }
	return ('\0');
}
