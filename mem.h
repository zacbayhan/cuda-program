#ifndef MEMORY_H
#define MEMORY_H

#include <stdio.h>
#include <stdlib.h>

int *allocate_int_vector (int n);
long int *allocate_long_int_vector (int n);
double *allocate_double_vector (long n);
void free_vector (void *x);


#endif


