#include <stdio.h>

/**
 * main -  a program that prints the alphabet in lowercase,
 *  followed by a new line.
 *  Return: Always 0
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q' || letter == 'e')
{
continue;
}}
putchar(letter);
return (0);
}

