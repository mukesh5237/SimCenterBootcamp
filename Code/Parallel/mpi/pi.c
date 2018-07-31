#include <stdio.h>
#include <time.h>

int main(){
	
	long int numSteps = 100000;
	double pi = 0; double time = 0;
	double dX = 1.0/numSteps;
	double Xi;

	clock_t start = clock();
	
	for (int i = 1; i<=numSteps; i++){
		Xi = (i*dX)-(dX/2);
		pi += dX*(4.0/(1.0+(Xi*Xi)));
	}
	printf("pi = %f \n",pi);

	clock_t stop = clock();
	double elapsed = (double)(stop-start) * 1000.0 / CLOCKS_PER_SEC;
	
	printf("Time = %f ms \n",elapsed);

	return(0);
	
}
