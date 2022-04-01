#include "main.h"

/**
 * _isalpha - tests whether a character is from alphabet.
 * @c: character to be checked.
 *
 * Return: 1 or 0 in otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
