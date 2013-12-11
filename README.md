Buddy-System-Malloc
===============

In this project, I created a library that implements the necessary calls to support heap memory allocation and deallocation for applications. I implemented my own versions of the standard malloc and free calls (as well as one other function), and use the “buddy algorithm” for managing the heap.

Buddy System: The buddy memory allocation technique is a memory allocation algorithm that divides memory into partitions to try to satisfy a memory request as suitably as possible. This system makes use of splitting memory into halves to try to give a best-fit.


void *malloc(size_t)
---------------------

Basic malloc functionality.
The type size_t behaves like the type unsigned int.  Malloc should return a pointer to a block of memory of the requested size as void *, or NULL if there’s no memory left in the system.


void free(void *)
---------------------
Basic free functionality; it should free the block of memory pointed to by the given argument by returning the
block of memory back to your free list. free(NULL) should have no effect.


void dump_memory_map(void)
---------------------
This function should print a “map” of allocated and free memory in the heap. The map should identify each free block, but doesn't need to identify each allocated block; it is sufficient to identify a “region” of allocated memory.
