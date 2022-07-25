#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc:count of the arguments supplied to the program
 * @argv:array of poniters to the strings
 *  Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv)
{
int y;

for (y = 0; y < argc; y++)

{
	printf("%s\n", argv[y]);

}

	return (0);

}

