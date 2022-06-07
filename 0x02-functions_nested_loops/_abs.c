#include "main.h"
/**
 * abs - absolute number
 * @n: place holder
 */

int _abs(int)
{
	int x;

	if(print_sign(n) == '-')
	{
		x = n*(-1);
		_puthchar (x);
	}
	
	else
	{
		x = n;
		_putchar (x);
	}
}
