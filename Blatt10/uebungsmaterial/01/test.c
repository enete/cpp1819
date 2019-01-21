#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct matrix
{
	//const int matrixDim = 3;
	//int mA[3][3], mV[3][3], mc1[3][3], mc2[3][3];
};


//Erstelle Matrix
void newMatrix(int matrix[][3], int a)
{
	int *array; 
	//Speicherreservieren
	array = (int *) malloc(sizeof(*array) * sizeof(matrix)); 
	
	printf("\nArray erstellen:\n");
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a; j++)
		{	
		 	int r = random();
			matrix[i][j] = r % 10;
			printf("Array[%d][%d] ", i, j);
			printf("Inhalt: %d\n", matrix[i][j]);  			
		}
		printf("\n");
	}
	printf("\n");
}

//Matrizen anzeigen
void printCalculation(int matrixA[][3], int matrixB[][3], int matrixC[][3], int a)
{
	printf("Ausgabe:\n");
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a; j++)
		{
			printf("%d", matrixA[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a; j++)
		{
			printf("%d", matrixB[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a; j++)
		{
			printf("%d ", matrixC[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//Addition von Matrizen
void addMatrices(int matrixA[][3],int matrixB[][3],int matrixC[][3], int a)
{
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a; j++)
		{
			matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
		}
	}
}

//Multiplikation von Matrizen
void mulMatrices(int matrixA[][3],int matrixB[][3],int matrixC[][3], int a)
{
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a; j++)
		{
			matrixC[i][j] = matrixA[i][j] * matrixB[i][j];
		}
	}
}

// Gib Matrix-Speicher wieder frei
void freeMatrix()
{
	//free();
}

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
	freeMatrix();

	return 0;
}

