#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char henry;

	for (henry = 'z'; henry >= 'a'; henry--)
		putchar(henry);

	putchar('\n');
	return (0);

}

