#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: numbers of line
 * Return: no return.
 */ 
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j < (i + 1); j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			if (i < (size - 1))
			{
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
