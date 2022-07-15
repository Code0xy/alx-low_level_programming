#include "main.h"

/**
 * reverse_array - a function that reverse the content of an array of integers
 * @a: pointer to the array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)

{
	int j, k, temp;

	for (k = 0, j = n - 1; k < j; j--, k++)

	{
		temp = *(a + k);
		*(a + k) = *(a + j);
		*(a + j) = temp;

	}
}
