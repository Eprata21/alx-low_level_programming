#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that excutes a given function
 * @array: pointer array
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
