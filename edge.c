/**
 * edge.h
 * 
 * Data-structure and function definitions for an edge.
 * Simulates the an edge of a graph-node.
 * 
 * Author: Richard Gale
 * Version: 16th March, 2023
 */

#include "edge.h"

/**
 * The data contained in an the edge.
 */
struct edge_data {
    uint8_t x; // The x coordinates of the neighbour this edge is against.
    uint8_t y; // The y coordinates of the neighbour this edge is against.
    uint8_t z; // The z coordinates of the neighbour this edge is against.
    uint8_t w; // The weight of the edge.
};

/**
 * Initialises the edge. 
 */
void edge_init(edge* ep, uint8_t x, uint8_t y, uint8_t z, uint8_t w)
{
    *ep = (edge) malloc(sizeof(struct edge_data));
    (*ep)->x = x;
    (*ep)->y = y;
    (*ep)->z = z;
    (*ep)->w = w;
}

/**
 * Frees the memory allocated to the edge. 
 */
void edge_free(edge* ep)
{
    free(*ep);
}

/**
 * Returns the x coordinate of the neighbour this edge is against.
 */
uint8_t edge_get_x(edge e)
{
    return e->x;
}

/**
 * Returns the y coordinate of the neighbour this edge is against.
 */
uint8_t edge_get_y(edge e)
{
    return e->y;
}

/**
 * Returns the z coordinate of the neighbour this edge is against.
 */
uint8_t edge_get_z(edge e)
{
    return e->z;
}

/**
 * Returns the weight of the edge.
 */
uint8_t edge_get_w(edge e)
{
    return e->w;
}

void edge_print(edge e)
{
    fprintf(stdout, "Edge: { x:%d, y:%d, z:%d, w:%d }\n", e->x, e->y, e->z, e->w);
}
