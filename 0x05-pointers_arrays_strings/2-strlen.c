#include "main.h"
#include <stdio.h>
#include <string.h>
#include < stdlib.h>

/**
 * _strlen - get a string length
 * @s: input string
 * Return: integer len
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}

	return (len);
}

