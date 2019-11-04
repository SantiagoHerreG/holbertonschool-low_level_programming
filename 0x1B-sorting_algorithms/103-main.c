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
    int array[] = {199, 145, 42, 109, 184, 156, 54, 74, 73, 124, 88, 155, 60, 149, 40, 160, 191, 66, 48, 7, 33, 85, 111, 39, 100, 121, 112, 158, 23, 146, 168, 61, 125, 1, 185, 163, 50, 55, 84, 45, 8, 83, 136, 76, 197, 165, 175, 35, 132, 151};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    merge_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
