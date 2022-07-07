#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_sings - prints sings.
 * @separator: sing to be printed between the sings.
 * @n: number of sings passed to the function.
 *
 * Return: no return.
 */
void print_sings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
