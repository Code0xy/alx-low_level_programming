#include <stdio.h>

/**
 * main -  a program that prints the alphabet in lowercase,
 *  followed by a new line.
 *  Return: Always 0
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
putchar(10); This is an ASCII code for a new line. 

return (0);
}

