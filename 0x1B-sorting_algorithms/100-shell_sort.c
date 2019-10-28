#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 *
 * @array: list of elements
 * @size: number of elements
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t i = 1, idx1, idx2, temp;

	if (!array || size <= 1)
		return;

	for (i = 1; i < size;)
		i = i * 3 + 1;

	i = (i - 1) / 3;
	for (; i >= 1; i = (i - 1) / 3)
	{
		for (idx1 = 0; idx1 < size; idx1++)
		{
			if (idx1 + i < size)
				idx2 = idx1 + i;
			else
				break;
			temp = idx1;
			while (temp != idx2)
			{
				if (array[temp] > array[idx2])
				{
					array[temp] += array[idx2];
					array[idx2] = array[temp] - array[idx2];
					array[temp] -= array[idx2];
					if (temp >= i)
					{
						temp -= i;
						idx2 -= i;
						continue;
					}
				}
				temp = idx2;
				if (idx2 + i < size)
					idx2 += i;
				continue;
			}
		}
		print_array(array, size);
	}
}
