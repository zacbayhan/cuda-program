#include "functions.h"

double rmse(double RMSE, int len, double *intake){

  double diff=0;
  double n = len/2; //one half the length of the column vector

  printf(" elements passed into rmse: %i\n", len);

  for (int i=0; i<len; i+=2){
    //printf("i[%i]: %G i[%i]:%G \n", i, intake[i], i+1, intake[i+1]);
    diff+=pow(intake[i+1]-intake[i],2);
  }

  RMSE = sqrt(1/n*diff);

return RMSE;

}





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
