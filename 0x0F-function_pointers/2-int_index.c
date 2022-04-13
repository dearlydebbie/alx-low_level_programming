#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: index of the first element found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	if (i == size)
	{
		return (-1);
	}
	return (-1);
}
