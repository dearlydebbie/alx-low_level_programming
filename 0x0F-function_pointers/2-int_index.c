#include "function_pointers.h"

/**
 * int_index -a function that searches for an integer.
 * @array: pointer to integer array.
 * @size: is the number of elements in the array.
 * @cmp:is a pointer to the function to be used to compare values.
 *
 * Return: returns the index of the first element otherwise return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				break;
			if (!cmp(array[size - 1]))
				return (-1);
		}
		return (i);
	}
	return (-1);
}
