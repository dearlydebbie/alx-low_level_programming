#include <stdio.h>

/**
 * main - prints all numbers of base 16.
 *
 * Return: 0 on success
 */

int main(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		putchar(letter);

	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
