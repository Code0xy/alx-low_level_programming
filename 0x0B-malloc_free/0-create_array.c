#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: specific char
 * @c: array of initialization
 * Return: Nothing
 */

char *create_array(unsigned int size, char c)
{
	char *m;

	unsighned int i;

	if (size == 0)
		return (NULL);

			m = malloc(size0f(c) * size);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		m[i] = c;

	return (m);


}
