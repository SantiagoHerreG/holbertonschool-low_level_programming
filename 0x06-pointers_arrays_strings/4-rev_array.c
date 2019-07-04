#include "holberton.h"
/**
 * reverse_array - changes an array's content to reverse order
 * @a: pointer to the array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, z = 0, k;

	int new[1000000];

	k = n;

	for (i = 0; i < n; i++)
	{
		new[i] = a[k - 1];
		k--;
	}
	while (z < i)
	{
		a[z] = new[z];
		z++;
	}
}
