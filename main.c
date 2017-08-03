#include "main.h"


int main(int argc, char *argv[]) {

  int len;
  double *intake;
  int proc = sysconf(_SC_NPROCESSORS_ONLN);


  int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start)(void *), void *arg);



  printf("this computer has %i processors\n", proc);
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


  free(intake);
  return 0;
}
