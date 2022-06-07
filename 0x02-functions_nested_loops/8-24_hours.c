#include "main.h"

/**
 * jack_bauer - prints 24 hours and minute
 */

void jack_bauer(void)
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
