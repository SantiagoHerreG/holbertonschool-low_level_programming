#include "sort.h"
/**
 * radix_sort - sorts the radix algorithm
 *
 * @array: array of integers to be sorted
 * @size: size of the array
 * Return: void
 */
void radix_sort(int *array, size_t size)
{
	int *ord_array;
	int i, j, idx_ord = 0, flag = 1, cp_size, digit = 1;

	if (!array || size <= 1)
		return;
	cp_size = (int)size;
	ord_array = malloc(sizeof(int) * size);

	while (flag)
	{
		flag = 0;
		idx_ord = 0;
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < cp_size; j++)
			{
				if ((array[j] / digit) % 10 == i)
				{
					ord_array[idx_ord++] = array[j];
					if (array[j] / (digit * 10) > 0)
						flag++;
				}
			}
		}
		digit *= 10;
		print_array(ord_array, size);
		for (i = 0; i < cp_size; i++)
			array[i] = ord_array[i];
	}
	free(ord_array);
}
