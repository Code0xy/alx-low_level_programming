#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function given as a parameter
 * @size:size of an array
 * @action:pointer to the function
 * @array: input integer array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (array && action)

		for (i = 0; i < size; i++)
			action(array[i]);

}

