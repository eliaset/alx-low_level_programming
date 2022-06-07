#include "main.h"
 /** 
  * print_alphabet - function from user
  * Return: 0 exit code
  */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar (i);
		_putchar ('\n');
	}
	_putchar('\n');
	return (0);
}
