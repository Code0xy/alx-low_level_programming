#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * char *_strncat - function that concatenates two strings
 * @dest: character destination
 * @src: source to appended
 *  Return: string
 */
char *_strncat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)

	{
		dest[len] = src[i];
		len += 1;

	}

	dest[len] = '\0';


	return (dest);

}
