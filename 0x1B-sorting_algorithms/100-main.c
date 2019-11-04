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
    int array[] = {64, 28, 43, 23, 17, 26, 48, 36, 7, 65, 15, 55, 44, 12, 25, 40, 70, 66, 73, 34, 72, 75, 50, 21, 45, 24, 13, 14, 9, 11, 39, 52, 31, 51, 57, 35, 10, 5, 20, 68, 1, 62, 69, 27, 16, 38, 46, 37, 71, 58};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    shell_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
