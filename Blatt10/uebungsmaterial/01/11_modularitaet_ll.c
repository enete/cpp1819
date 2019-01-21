#include <stdio.h>
#include "include/matrixOps_ll.h"

int main()
{
	const int matrixDim = 3;

	int mA[matrixDim][matrixDim];
	int mB[matrixDim][matrixDim];
	int mc1[matrixDim][matrixDim];
	int mc2[matrixDim][matrixDim];
	
	newMatrix(mA, matrixDim);
	newMatrix(mA, matrixDim);
	
	addMatrices(mA, mB, mc1, matrixDim);
	mulMatrices(mA, mB, mc2, matrixDim);
	
	printCalculation(mA, mB, mc1, matrixDim);
	printCalculation(mA, mB, mc2, matrixDim);
	
	freeMatrix(mA);
	freeMatrix(mB);
	freeMatrix(mc1);
	freeMatrix(mc2);
	return 0;
}

