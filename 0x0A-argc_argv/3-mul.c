#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multipling function
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int h, y, k;

	h = 1;
	y = 2;
	k = 3;

	if (argc != k)

	{
		printf("Error\n");
		return (1);

	}
	printf("%d\n", atoi(argv[h]) * atoi(argv[y]));
	return (0);

}

