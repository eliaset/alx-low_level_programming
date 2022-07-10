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
	int (*cal)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	cal = get_op_func(op);

	if (cal == NULL || op != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == '/' && b == 0) || (op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", cal(a, b));

	return (0);
}
