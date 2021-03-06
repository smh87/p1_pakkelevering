/* Implementation of the Bellman-Held-Karp combinatorial optimisation algorithm
 * for use in our p1 exam. The algorithm is to take its input matrix from a two
 * dimensional array generated by our A* implementation */

/* Main body of the held-karp implementation, this function calls all other in
 * the correct order, and returns the min_cost and plan pointers */
int held_karp(int **matrix, int size,
    int start_node, int plan[]);
