#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 */

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar (i);
		}
		i++;
	}
	_putchar ('\n');
}
