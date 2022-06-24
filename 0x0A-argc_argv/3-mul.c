#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	if (argc == 3)
	{
		printf("%d\n", i);
		return (0);
	}
}
