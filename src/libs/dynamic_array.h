/* dynamic_array.h - made with inspiration from
"A Practical Guide to Data Structures and Algorithms using Java" */
#ifndef DYN_NODE2
#define DYN_NODE2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../pathfinding/pairing_heap.h"
//#include "../pathfinding/a_star.h"
#endif

#ifndef DYN_NODE
#define DYN_NODE
typedef struct dyn_array_node dyn_array_node;

struct dyn_array_node {
  int low_water_mark;
  int high_water_mark;
  int min_capacity;
  int number_of_elements;
  int items;
  node *nodes;
};


#endif

/* HEAP FUNCTIONS */
/* Makes a empty array */
dyn_array_heap *make_dyn_array_h(int size);

/* Not implemented yet */
void trim_to_size_h();

/* Maybe implemented */
void ensure_capacity_h(dyn_array_heap *array, int capacity);

/* Implemented */
dyn_array_heap *resize_array_h(dyn_array_heap *array, int new_size);

/* Implemented */
dyn_array_heap *add_heap_to_end_h(dyn_array_heap *array_to_insert_in, heap_node *heap_to_insert);
/* Implemented */
dyn_array_heap *delete_heap_h(dyn_array_heap *array, heap_node *heap_to_delete);
/* Not implemented yet */
dyn_array_heap *find_heap_h(dyn_array_heap *array, heap_node heap_to_find);

// NODE FUNCTIONS
dyn_array_node *make_dyn_array_n(int size);

/* Not implemented yet */
void trim_to_size_n();

/* Maybe implemented */
void ensure_capacity_n(dyn_array_node *array, int capacity);

/* Implemented */
dyn_array_node *resize_array_n(dyn_array_node *array, int new_size);

/* Implemented */
dyn_array_node *add_node_to_end_n(dyn_array_node *array_to_insert_in, node node_to_insert);
/* Implemented */
dyn_array_node *delete_node_n(dyn_array_node *array, node *node_to_delete);
/* Not implemented yet */
dyn_array_node *find_node_n(dyn_array_node *array, node node_to_find);