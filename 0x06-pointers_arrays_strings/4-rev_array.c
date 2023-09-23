#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of an array of
 * integers.
 *
 * @a: This is the input array
 * @n: This is the positions have the array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int temp;

	for (i = 0; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
