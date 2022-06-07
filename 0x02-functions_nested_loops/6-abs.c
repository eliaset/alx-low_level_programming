#include "main.h"
/**
 * _abs - absolute number
 * @n: place holder of integer
 */

int _abs(int n)
{
	int x;

	if (n < 0)
	{
		x = n * (-1);
		_putchar (x);
	}
	else
	{
		x = n;
		_putchar (x);
	}
}
