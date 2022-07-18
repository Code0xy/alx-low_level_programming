#include "main.h"
#include <stddef.h>

/**
 * _strpbrk -function locates the first occurrence in the string
 * @s: matches one of the bytes
 * @accept: pointer to set of bytes
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)

{
	int i;

	while (*s)

	{
		for (i = 0; accept[i]; i++)

		{
			if (accept[i] == *s)

			{
				return (s);

			}

		}

		s++;

	}

	return (NULL);

}


