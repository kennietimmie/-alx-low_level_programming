#include "function_pointers.h"

/**
 * array_iterator - performs an action
 * @array: array of ints
 * @size: size of array
 * @action: callable
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
