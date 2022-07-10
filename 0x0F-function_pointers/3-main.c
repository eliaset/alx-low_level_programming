#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations (calculator)
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Always)
 */

int main(int argc, char *argv[])
{
	int a, b;
	char op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if (b == 0 && (op == '/' || op == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(a, b));

	return (0);
}
