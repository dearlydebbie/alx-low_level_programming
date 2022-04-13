#include "function_pointers.h"

/**
 * array_iterator - executes a function parameter on each element of an array.
 *@array: pointer to integer array.
 *@size:  size of the array.
 *@action: a pointer to the function you need to use.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
