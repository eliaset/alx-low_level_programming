#include "main.h"

/**
* times_table - multiplication
*/
void times_table(void)
{
int i, j, k;

for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
	{
		k = i * j;
		_putchar (k / 10);
		_putchar (k % 10);
		if (j != 9)
		{
			_putchar (',');
			_putchar (' ');
		}
	}
	_putchar ('\n');
}
}
