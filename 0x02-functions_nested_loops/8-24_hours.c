#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the int place holder
 * Return: exit the code
 */

int print_last_digit(int n)
{
	for (i = 00; i < 24; i++)
	{
		for (j = 00; j < 60; j++)
		{
			_putchar (i);
			_putchar (':');
			_putchar (j);
		}
		_putchar ('\n');
	}
}
