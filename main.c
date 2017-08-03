#include "main.h"


int main(int argc, char *argv[]) {

  int len;
  double *intake;
  int NUM_THREADS = sysconf(_SC_NPROCESSORS_ONLN);


  int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start)(void *), void *arg);



  printf("this computer has %i processors\n", NUM_THREADS);
  intake = (double*)malloc(argc*sizeof(double));
  printf("Arguments passed in: %i \n", argc);
  printf("size of intake: %ld\n", sizeof(intake));

  for (int i = 0; i < argc; i++) {
    if(i > 0) {
      intake[i] = atof(argv[i]);
      printf("argv[%i]: %f \n", i-1, intake[i]);
    }
  }

	least_square();
	mat_fact();
	dot();
	mat_vec();
	power();
	neighbor();

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

  free(intake);
  return 0;
}


void *PrintHello(void *threadid)
{
   long tid;
   tid = (long)threadid;
   printf("Hello World! It's me, thread #%ld!\n", tid);
   pthread_exit(NULL);
}
