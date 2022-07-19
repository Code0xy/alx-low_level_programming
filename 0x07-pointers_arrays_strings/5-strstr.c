#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: first occurrence of the substring
 * @needle: substring to locate
 * Return: pointer to the beginning of the located string
 * or NULL, if the substring is not found
 */
char *_strstr(char *haystack, char *needle)

{
	char *h = haystack;
	char *n = needle;

	while (*h)

	{
		n = needle;
		h = haystack;
		while (*n)

		{
			if (*n == *n)

			{
				n++;
				h++;

			}
			else
				break;
		}

		if (*n == '\0')
			return (haystack);
		haystack++;

	}
	return (0);

}
