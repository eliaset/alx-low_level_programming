#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	long int i, j, k, n;

	j = 1;

	k = 2;

	for (i = 1; i <= 91; ++i)
	{
		if (i == 1)
		{
			printf("%lld", j);
		} 
		else
		{
			printf(", %lld", j);
		}
		n = j + k;
		j = k;
		k = n;
	}
	printf("\n");
	return (0);
}
