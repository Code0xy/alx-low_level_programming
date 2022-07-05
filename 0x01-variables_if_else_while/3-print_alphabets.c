#include <stdio.h>

/**
 * main -  a program that prints the alphabet in lowercase,
 * then uppercase
 *  followed by a new line.
 *  Return: Always 0
 **/
int main(void)
{
int ch;
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);

putchar(‘\n’);
 /* print lowercase letters */

for (ch = 'a'; ch <= 'z'; ch++)

putchar(ch);

putchar(‘\n’);
return (0);
}

