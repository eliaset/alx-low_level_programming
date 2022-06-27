#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long long int i, j, k, n;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (i == 1)
		{
			printf("%lld", j);
		} else
		{
			printf(", %lld", j);
		}
		n = j + k;
		j = k;
		k = n;
	}

	return (0);
}
