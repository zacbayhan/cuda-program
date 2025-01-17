#include "mem.h"


int *allocate_int_vector (int n)
{
  int *x;

  x = (int*) calloc (n, sizeof(int));

  if (x == NULL)
  {
    fprintf (stderr, "Problem allocating memory for vector\n");
#ifdef PARALLEL
    MPI_Abort (MPI_COMM_WORLD, 1);
#else
    exit (1);
#endif
  }

  return x;
}


long int *allocate_long_int_vector (int n)
{
  long int *x;

  x = (long int*) calloc (n, sizeof(long int));

  if (x == NULL)
  {
    fprintf (stderr, "Problem allocating memory for vector\n");
#ifdef PARALLEL
    MPI_Abort (MPI_COMM_WORLD, 1);
#else
    exit (1);
#endif
  }

  return x;
}

double *allocate_double_vector (long n)
{
  double *x;

  x = (double*) calloc (n, sizeof(double));

  if (x == NULL)
  {
    fprintf (stderr, "Problem allocating memory for vector\n");
#ifdef PARALLEL
    MPI_Abort (MPI_COMM_WORLD, 1);
#else
    exit (1);
#endif
  }

  return x;
}

void free_vector (void *x)
{
  free (x);
}
