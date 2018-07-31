#include <mpi.h>
#include <stdio.h>
//#include <time.h>

static long int numSteps = 100000;

int main(int argc, char **argv) {

	int numP, procID;

	// the usual mpi initialization
  	MPI_Init(&argc, &argv);
  	MPI_Comm_size(MPI_COMM_WORLD, &numP);
  	MPI_Comm_rank(MPI_COMM_WORLD, &procID);
	
	double pi = 0; double time = 0;
	double dX = 1.0/numSteps;
	double Xi;

	//clock_t start = clock();
	
	int istart = (procID*numSteps/numP)+1;
	int iend = (procID+1)*numSteps/numP;
	
	for (int i = istart; i<=iend; i++){
		Xi = (i*dX)-(dX/2);
		pi += dX*(4.0/(1.0+(Xi*Xi)));
	}

	int *globalData = NULL;

	MPI_Gather(&pi, numSteps/numP, MPI_INT, globalData, numSteps/numP, MPI_INT, 0, MPI_COMM_WORLD);

	//printf("pi = %f \n",pi);

	//clock_t stop = clock();
	//double elapsed = (double)(stop-start) * 1000.0 / CLOCKS_PER_SEC;
	
	//printf("Time = %f ms \n",elapsed);

	MPI_Finalize();

	return(0);
	
}
