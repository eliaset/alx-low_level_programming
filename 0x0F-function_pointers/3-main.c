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
	int (*cal)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	cal = get_op_func(argv[2]);

	if (cal == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (argv[2] == '/' || argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	
	printf("%d\n", cal(a, b));
	return (0);
}
