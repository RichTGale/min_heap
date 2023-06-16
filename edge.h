/**
 * edge.h
 * 
 * Data-structure and function declarations for an edge.
 * Simulates the an edge of a graph-node.
 * 
 * Author: Richard Gale
 * Version: 16th March, 2023
 */

#ifndef EDGE_H
#define EDGE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 * The edge data-structure.
 */
typedef struct edge_data* edge;

/**
 * Initialises the edge. 
 */
void edge_init(edge* ep, uint8_t x, uint8_t y, uint8_t z, uint8_t w);

/**
 * Frees the memory allocated to the edge. 
 */
void edge_free(edge* ep);

/**
 * Returns the x coordinate of the neighbour this edge is against.
 */
uint8_t edge_get_x(edge e);

/**
 * Returns the y coordinate of the neighbour this edge is against.
 */
uint8_t edge_get_y(edge e);

/**
 * Returns the z coordinate of the neighbour this edge is against.
 */
uint8_t edge_get_z(edge e);

/**
 * Returns the weight of the edge.
 */
uint8_t edge_get_w(edge e);

void edge_print(edge e);

#endif // EDGE_H
