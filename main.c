#include "main.h"


int main(int argc, char *argv[]) {

  // define varibles
  int len = argc-1;
  double RMSE;
  double *intake;

  //allocate vectors
  intake = (double*)malloc(len*sizeof(double));

  //handle command line inputs
  for(int i=1; i < argc; i++){
      intake[i-1] = (double)atof(argv[i]);
  }

  //main loop here
  RMSE = rmse(RMSE, len, intake);
  printf("RMSE %G\n", RMSE);

/*

	least_square();
	mat_fact();
	dot();
	mat_vec();
	power();
	neighbor();
*/

  free(intake);
  return 0;
}
