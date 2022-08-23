/**
 * main.c
 * 
 * Demonstrates the use of the min_heap type.
 * 
 * Author: Richard Gale
 * Version: 24th Augist, 2022 
 */

#include <stdio.h>

#include "min_heap.h"
#include "node.h"

int main(int argc, char* argv[])
{
    min_heap mh;    // The min_heap.
    int vals[12] = { 5, 23, 6, 1, 76, 45, 887, 42, 4, 99, 8, 6 }; // The values.
    int num_vals = sizeof(vals) / sizeof(int);  // The number of values.

    // Initialising the heap.
    min_heap_init(&mh, INTEGER);

    // Printing the values.
    printf("VALUES UNORDERED:\n");
    for (int i = 0; i < num_vals; i++)
    {
        printf("%d, ", vals[i]);
    }
    printf("\n");

    // Adding the values to the heap.
    for (int i = 0; i < num_vals; i++)
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