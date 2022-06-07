#include "main.h"
/**
 * _abs - absolute number
 * @n: place holder of integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		_putchar (n);
	}
	else
	{
		_putchar (n);
	}
}
