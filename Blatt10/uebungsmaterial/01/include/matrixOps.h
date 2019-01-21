#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void  matrix(int a)
{
	int matrix[a][a];

	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a; j++)
		{
			matrix[i][j] = random();
			printf("Array[%d][%d]: ", i, j);
			printf("Inhalt: %ls", &matrix[i][j]);
		}
	}
}

//Allokiere Matrix-Speicher
void newMatrix()
{

}

//Addition von Matrizen
void addMatrices()
{

}

//Multiplikation von Matrizen
void mulMatrices()
{
	
}

// Gib Matrix-Speicher wieder frei
void freeMatrix()
{

}
