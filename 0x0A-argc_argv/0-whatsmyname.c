#include <main.h>
/**
 * main - prints its name + \n
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar (argv[0][i]);
	}
	_putchar ('\n');
		return (0);
}
