/*
steps to implement:

1: Query the user for a number n (type size_t) and read it.

2: Generate (n) random integers, each in the range from 1 to 1000, and as you generate those numbers insert them into     a linked list. Use the function rand() from <cstdlib> and seed with srand(time(NULL)).

3: Print out this unsorted linked list.

4: Sort the linked list. 
  
   You must sort by moving nodes, i.e. you are not permitted to change the data field of any node.
   
   After the (i)th step, list sort has rearranged the list such that the first (i) nodes of the list 
   are sorted and the remaining nodes are still unsorted. Keep a pointer marker_ptr such that the sorted region 
   stretches from head_ptr to marker_ptr.
   
   In each iteration the program finds the node with the smallest element in the unsorted part of
   the list and then moves that element from its current position to the position right after the node at marker_ptr.
   Then marker_ptr is updated. The iteration repeats untill all nodes are in sorted orter
   
5: Finally print out the sorted linked list.
*/
