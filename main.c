/**
 * main.c
 * 
 * Demonstrates the use of the min_heap type.
 * 
 * Author: Richard Gale
 * Version: 1.0.1 
 */

#include <stdio.h>
#include <stdint.h>

#include "custom_type.h"
#include "min_heap.h"

int main(int argc, char* argv[])
{
    min_heap mh;                /* The min_heap. */
    custom_type cts[12];        /* Array of custom type. */
    uint64_t vals[12] = { 5, 23, 6, 1, 76, 45, 887, 42, 4, 99, 8, 6 };  /* The values. */
    int num_vals = sizeof(vals) / sizeof(uint64_t);  /* The number of values. */
    uint64_t i;                 /* The current index in the heap. */
    
    /* Initialise the data. */
    for (i = 0; i < num_vals; i++)
    {
        custom_type_init(&(cts[i]), vals[i]);
    }

    // Initialising the heap.
    min_heap_init(&mh);

    // Printing the values.
    printf("VALUES UNORDERED:\n");
    for (i = 0; i < num_vals; i++)
    {
        printf("%ld, ", custom_type_get_val(cts[i]));
    }
    printf("\n");

    // Adding the values to the heap.
    for (i = 0; i < num_vals; i++)
    {
        min_heap_add(&mh, &(cts[i]));
    }

    // Removing the values from the heap from the lowest value
    // to the highest value and printing them.
    printf("VALUES MIN TO MAX:\n");
    while(!(min_heap_is_empty(mh)))
    {
        // Removing and printing the minimum value in the heap.
        printf("%ld, ", custom_type_get_val(*((custom_type*) min_heap_pop_min(&mh))));
    }
    printf("\n");

    // Freeing memory allocated to the heap.
    min_heap_free(&mh);

    /* Free the array of custom_type. */
    for (i = 0; i < num_vals; i++)
    {
        custom_type_free(&(cts[i]));
    }
    
    return 0;
}
