#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 * Return: 0 to exit the code
 */

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar (i);
		i++;
	}
	_putchar ('\n');
	return (0);
}