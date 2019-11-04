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
    int array[] = {24, 44, 27, 86, 63, 106, 68, 54, 3, 22, 115, 98, 120, 8, 49, 45, 141, 76, 104, 79, 133, 61, 56, 114, 11, 146, 43, 137, 102, 131, 46, 147, 78, 112, 55, 105, 12, 110, 126, 123, 100, 60, 30, 4, 2, 83, 150, 5, 51, 127, 41, 85, 38, 9, 103, 77, 36, 29, 18, 121, 134, 80, 144, 6, 128, 116, 21, 111, 117, 88, 108, 57, 143, 119, 20, 136, 122, 64, 59, 35, 95, 26, 52, 124, 33, 10, 67, 135, 25, 91, 28, 39, 81, 1, 72, 37, 47, 125, 42, 145};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
