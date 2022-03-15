#include "main.h"

/**
 * _abs - calculate the absolute value of the number from zero.
 * @r: An integer input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number r
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
