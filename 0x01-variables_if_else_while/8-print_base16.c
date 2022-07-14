#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int linda;
	char str;

	for (linda = 0; linda < 10; linda++)
		putchar(linda + '0');

	for (str = 'a'; str <= 'f'; str++)
		putchar(str);

	putchar('\n');
	return (0);

}
