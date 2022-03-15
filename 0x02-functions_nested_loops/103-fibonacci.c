#include <stdio.h>

/**
 * main - sum even fibonacci numbers under 4 million.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long c, i, j, k, sum;

	i = sum = 0;
	j = 1;
	for (c = 0; c < 50; c++)
	{
		k = i + j;
		i = j;
		j = k;
		if ((k % 2 == 0) && (k < 4000000))
		{
			sum += k;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
