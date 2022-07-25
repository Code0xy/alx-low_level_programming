#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add numbers
 * @argc: numbers of arguments
 * @argv: argument vector of pointers to strings
 * Return: 0 no errors, else 1
 */
int main(int argc, char *argv[])

{
	int h, w, linda;

	linda = 0;

	if (argc < 1)
		printf("0\n");

	for (h = 1; h < argc; h++)

	{

	for (w = 0; argv[h][w]; w++)

	{
		if (!isdigit(argv[h][w]))

		{
			printf("Error\n");
			return (1);

		}
	}
	linda += atoi(argv[h]);
	}
	printf("%d\n", linda);
	return (0);

}

