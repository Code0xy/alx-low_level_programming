#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: duplicate of a string
 * Return: newly alloacated space in memory
 */

char *_strdup(char *str)

{
	char *str1;
	int i, j;

	if (str == NULL)

	{
	 return (NULL);
	}
	for (i = 0; str[i]; i++)

	{
		;
	}
	i++;
	str1 = malloc(sizeof(char) * i);

	if (str1 == NULL)

	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
		str1[j] = str[j];

	return (str1);

}
