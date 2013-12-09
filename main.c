#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <sys/time.h>

void dump_memory_map(void);

int main(int argc, char **argv) {
    void *m1 = malloc(50);  // should allocate 64 byte
	dump_memory_map();    
	void *m2 = malloc(100); // should allocate 128 bytes
	dump_memory_map();    
	myfree(m1);
    dump_memory_map();
    void *m3 = malloc(56);  // should allocate 64 bytes
	dump_memory_map();    
	void *m4 = malloc(11);  // should allocate 32 bytes
	dump_memory_map();    
	myfree(m3);
	dump_memory_map();    
	void *m5 = malloc(30);  // should allocate 64 bytes
	dump_memory_map();    
	void *m6 = malloc(120); // should allocate 128 bytes
	dump_memory_map();    
	myfree(m2);
	dump_memory_map();    
	return 0;
}
