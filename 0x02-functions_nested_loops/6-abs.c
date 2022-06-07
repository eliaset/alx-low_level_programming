#include "main.h"
/**
 * abs - absolute number
 * @n: place holder
 */

int _abs(int n)
{
	int x;

	if(print_sign(n) == '-')
	{
		x = n*(-1);
		_putchar (x);
	}
	else
	{
		x = n;
		_putchar (x);
	}
}
