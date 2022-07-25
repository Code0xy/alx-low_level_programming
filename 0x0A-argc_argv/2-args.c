#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: count of the arguments
 * @argv: array of pointers to the strings
 * Return: Always 0
 */
int main(int argc, char *argv[])

{
	int l;

	for (l = 0; l < argc; l++)
		printf("%s\n", argv[l]);

	return (0);

}

