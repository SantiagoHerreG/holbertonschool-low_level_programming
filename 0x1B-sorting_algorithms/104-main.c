#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {56, 94, 43, 38, 93, 35, 30, 4, 47, 11, 16, 62, 5, 92, 61, 77, 42, 8, 23, 26, 65, 1, 17, 87, 84, 71, 55, 48, 46, 53, 75, 24, 91, 39, 51, 58, 74, 10, 85, 29, 60, 78, 49, 21, 7, 28, 19, 98, 63, 6};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    heap_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
