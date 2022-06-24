#include <stdio.h>
#include "main.h"
/**
 * main - prints number of arguments
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
