#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * string_toupper - converts lowercase letters of a string to uppercase
 * @ch: pointer to char
 * Return: Always 0
 */

char *string_toupper(char *ch)

{
	int k = 0;

	while (*(ch + k) != '\0')

	{
		if (*(ch + k) >= 97 && *(ch + k) <= 122)
			*(ch + k) = *(ch + k) - ' ';

		k++;

	}
return (ch);

}
