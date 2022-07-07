#include "main.h"

/**
 *_isupper - this is a function check upper case alphas
 *@c: an integer
 *Return: Always success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);

	return (c >= 65 && c <= 90);
	return (c >= 'A' && c <= 'Z');
}
