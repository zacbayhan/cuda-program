#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#include "main.h"



void *PrintHello(void *threadid);


void least_square();
void mat_fact();
void dot();
void mat_vec();
void power();
void neighbor();
double rmse(double RMSE, int len, double *intake);




#ifdef cblas

#include <cblas.h>

void power_blas();



#endif
#endif
