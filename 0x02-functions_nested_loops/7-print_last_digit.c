#include "main.h"
/**
 * print_last_digit - absolute number
 * @n: place holder
 * Return: n return the value
 */

int print_last_digit(int n)
{
	int x;
	if(n < 0)
		{
			x = n*-1;
		}
	x = n % 10;
	return (x);
}
