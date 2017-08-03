#include "functions.h"


void least_square(){
printf("inside least_square\n");
}
void mat_fact(){
printf("inside mat_fact\n");
}

void dot(){
int NUM_THREADS = sysconf(_SC_NPROCESSORS_ONLN);
printf("this computer has %i processors\n", NUM_THREADS);

pthread_t threads[NUM_THREADS];
int rc;
long t;
for(t=0;t<NUM_THREADS;t++){
  printf("In main: creating thread %ld\n", t);
  rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
  if (rc){
    printf("ERROR; return code from pthread_create() is %d\n", rc);
    exit(-1);
    }
  }
/* Last thing that main() should do */
pthread_exit(NULL);
}

void *PrintHello(void *threadid)
{
   long tid;
   tid = (long)threadid;
   printf("Hello World! It's me, thread #%ld!\n", tid);
   pthread_exit(NULL);
}

void mat_vec(){
printf("inside mat_vec\n");
}

void power(){
printf("inside power\n");
int NUM_THREADS = sysconf(_SC_NPROCESSORS_ONLN);
printf("this computer has %i processors\n", NUM_THREADS);

pthread_t threads[NUM_THREADS];
int rc;
long t;
for(t=0;t<NUM_THREADS;t++){
  printf("In main: creating thread %ld\n", t);
  rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
  if (rc){
    printf("ERROR; return code from pthread_create() is %d\n", rc);
    exit(-1);
    }
  }
}

void neighbor(){
printf("inside neigbor\n");
}
