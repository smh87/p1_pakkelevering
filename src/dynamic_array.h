/* dynamic_array.h - made with inspiration from
"A Practical Guide to Data Structures and Algorithms using Java" */

struct dyn_array_heap {
  //The threshold for then the array is reduced in size
  int low_water_mark;
  //The threshold for then the array is expanded in size
  int high_water_mark;
  //The minimum size the array can have
  int min_capacity;
  //Number of items in array
  int items;
  //The size of the array
  //int size; maybe not needed
  heap_elem heap_elems[];
};

struct dyn_array_node {
  //The threshold for then the array is reduced in size
  int low_water_mark;
  //The threshold for then the array is expanded in size
  int high_water_mark;
  //The minimum size the array can have
  int min_capacity;
  //Number of items in array
  int items;
  //The size of the array
  //int size; maybe not needed
  node nodes[];
};

typedef struct dyn_array_heap dyn_array_heap;
typedef struct dyn_array_node dyn_array_node;

/* HEAP FUNCTIONS */
/* Makes a empty array */
dyn_array_heap *make_dyn_array_h(int size);
/* Not implemented yet */
void trim_to_size_h();
/* Maybe implemented */
void ensure_capacity_h(dyn_array *array, int capacity);
/* Implemented */
dyn_array_heap *resize_array_h(dyn_array *array, int new_size);
/* Implemented */
dyn_array_heap *add_heap_to_end_h(dyn_array *array_to_insert_in, heap_elem heap_to_insert);
/* Implemented */
dyn_array_heap *delete_heap_h(dyn_array *array, heap_elem heap_to_delete);
/* Not implemented yet */
dyn_array_heap *find_heap_h(dyn_array *array, heap_elem heap_to_find);

/* NODE FUNCTIONS */
/* Makes a empty array */
dyn_array *make_dyn_array_n(int size);
/* Not implemented yet */
void trim_to_size_n();
/* Maybe implemented */
void ensure_capacity_n(dyn_array *array, int capacity);
/* Implemented */
dyn_array *resize_array_n(dyn_array *array, int new_size);
/* Implemented */
dyn_array *add_node_to_end_n(dyn_array *array_to_insert_in, node node_to_insert);
/* Implemented */
dyn_array *delete_node_n(dyn_array *array, node node_to_delete);
/* Not implemented yet */
dyn_array *find_node_n(dyn_array *array, node node_to_find);
