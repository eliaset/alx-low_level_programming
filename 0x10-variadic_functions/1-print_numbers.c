#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @n: number of arguments
 * @separator:  string to be printed between numbers
 * Return: return the value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(ap, int), separator);
		printf("%d\n", va_arg(ap, int));
	}
	else
	{
		for (i = 0; i < n - 1; i++)
			printf("%d", va_arg(ap, int));
		printf("%d\n", va_arg(ap, int));
	}
	va_end(ap);
}
