#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int program;

	for (program = 0; program < 10; program++)

	{
		putchar(program + '0');

		if (program == 9)
			continue;

		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);

}
