#include "main.h"
/**
 * print_sign - check the sign of the number
 * @n: place holder
 * Return: 0 or 1 -1 to exit
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
