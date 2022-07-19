#include "main.h"
#include <stdio.h>

/**
 * set_string - it sets the value of a pointer to a char
 * @s: the pointer to change
 * @to: value to change the pointer
 * Return: Always 0
 */
void set_string(char **s, char *to)

{
	*s = to;

}

