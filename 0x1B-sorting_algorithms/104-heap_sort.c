#include "sort.h"
#include <stdio.h>
void heap_tree(int *array, size_t size, size_t end)
{
	size_t parent, end_copy;

	end_copy = end;
	parent = (end - 1) / 2;
	while (end)
	{ 
		if (array[end] > array[parent])
		{
			array[parent] += array[end];
			array[end] = array[parent] - array[end];
			array[parent] -=array[end];
			print_array(array, size);
			end = end_copy;
			parent = (end - 1) / 2;
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
	heap_tree(array, size, size);
}
