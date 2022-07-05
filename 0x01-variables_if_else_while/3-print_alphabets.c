#include <stdio.h>

/**
 * main -  a program that prints the alphabet in lowercase,
 * then uppercase
 *  followed by a new line.
 *  Return: Always 0
 */
int main(void)
{
int ch;
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar(10);

return (0);
}

