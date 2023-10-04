/**
 * main.c
 * 
 * Demonstrates the use of the min_heap type.
 * 
 * Author: Richard Gale
 * Version: 1.0.0 
 */

#include <stdio.h>
#include <stdint.h>

#include "min_heap.h"

int main(int argc, char* argv[])
{
    min_heap mh;    // The min_heap.
    uint64_t vals[12] = { 5, 23, 6, 1, 76, 45, 887, 42, 4, 99, 8, 6 }; // The values.
    int num_vals = sizeof(vals) / sizeof(uint64_t);  // The number of values.
    uint64_t i; // The current index in the heap.

    // Initialising the heap.
    min_heap_init(&mh);

    // Printing the values.
    printf("VALUES UNORDERED:\n");
    for (i = 0; i < num_vals; i++)
    {
        printf("%ld, ", vals[i]);
    }
    printf("\n");

    // Adding the values to the heap.
    for (i = 0; i < num_vals; i++)
    {
        min_heap_add(&mh, &(vals[i]));
    }

    // Removing the values from the heap from the lowest value
    // to the highest value and printing them.
    printf("VALUES MIN TO MAX:\n");
    while(!(min_heap_is_empty(mh)))
    {
        // Removing and printing the minimum value in the heap.
        printf("%d, ", *((int*) min_heap_pop_min(&mh)));
    }
    printf("\n");

    // Freeing memory allocated to the heap.
    min_heap_free(&mh);

    return 0;
}
