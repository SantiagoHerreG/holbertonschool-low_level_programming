#include "sort.h"
/**
 * heap_tree - sorts using the heap sorting algorithm
 *
 * @array: array of integers to be sorted
 * @size: size of the array
 * @end: positional variable
 * Return: void
 */
void heap_tree(int *array, size_t size, size_t end)
{
	size_t parent, end_copy, flag = 0;

	end_copy = end;
	parent = (end - 1) / 2;
	while (end)
	{
		if (end % 2 == 1 && end != end_copy && (array[end]
		> array[parent] || array[end + 1] > array[parent]))
		{
			if (array[end] < array[end + 1])
				end++;
			flag++;
		}
		else if (end % 2 == 0 && (array[end] > array[parent]
		|| array[end - 1] > array[parent]))
		{
			if (array[end] < array[end - 1])
				end--;
			flag++;
		}
		else if (end % 2 == 1 && end == end_copy &&
		array[end] > array[parent])
			flag++;
		if (flag)
		{
			array[parent] += array[end];
			array[end] = array[parent] - array[end];
			array[parent] -= array[end];
			print_array(array, size);
			end = end_copy;
			parent = (end - 1) / 2;
			flag = 0;
		}
		else
		{
			end--;
			parent = (end - 1) / 2;
		}
	}
}
/**
 * heap_sort - sorts using the heap sorting algorithm
 *
 * @array: array of integers to be sorted
 * @size: size of the array
 * Return: void
 */
void heap_sort(int *array, size_t size)
{
	size_t end;

	if (!array || size <= 1)
		return;

	end = size - 1;
	while (end)
	{
		heap_tree(array, size, end);
		array[0] += array[end];
		array[end] = array[0] - array[end];
		array[0] -= array[end];
		print_array(array, size);
		end--;
	}
}
