#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function copies memory area
 * @dest: character destination
 * @src: character source
 * @n: integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	memcpy(dest, src, n);



		return (dest);

}
