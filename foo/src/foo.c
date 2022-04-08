
#include "foo.h"
#include <stdio.h>
#include <stdlib.h>


int cmpfunc(const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int foo(void *vet,int tam, int key){
	int *item;
	
	item = (int*) bsearch (&key, vet, tam, sizeof (int), cmpfunc);
	if (item == 0) return -1;
	return *item;
}
