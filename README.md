Buddy-System-Malloc
===============

In this project, I created a library that implements the necessary calls to support heap memory allocation and deallocation for applications. I implemented my own versions of the standard malloc and free calls (as well as one other function), and use the “buddy algorithm” for managing the heap.

• void *malloc(size_t).
Basic malloc functionality.
The type size_t behaves like the type unsigned int. Your malloc should return a pointer to a block of memory of the requested size as void *, or NULL if there’s no memory left in the system.
To maintain some bookkeeping information, you will need to add 8 bytes to each allocation request. You will also need to raise the request size to the nearest power of two greater than or equal to the request size. For example, if a request for 50 bytes is made, you should add 8, then raise that value (58) to the next larger power of 2 — 64. As another example, a request for 4 bytes should be raised to 16 (4 + 8 = 12, and the next larger power of 2 is 16).
void free(void *).
Basic free functionality; it should free the block of memory pointed to by the given argument by returning the
block of memory back to your free list. free(NULL) should have no effect.
void dump_memory_map(void).
This function should print a “map” of allocated and free memory in the heap. The map should identify each free block, but you do not need to identify each allocated block; it is sufficient to identify a “region” of allocated memory.
