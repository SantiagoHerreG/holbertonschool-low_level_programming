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
    int array[] = {13, 9, 92, 64, 29, 44, 89, 71, 62, 66, 93, 8, 31, 21, 1, 25, 22, 76, 60, 72, 37, 15, 74, 47, 77, 40, 90, 79, 16, 3, 81, 30, 4, 39, 26, 84, 98, 27, 12, 51, 23, 24, 36, 63, 99, 38, 7, 14, 87, 55, 70, 82, 67, 94, 20, 19, 59, 43, 28, 17, 86, 56, 80, 88};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bitonic_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
