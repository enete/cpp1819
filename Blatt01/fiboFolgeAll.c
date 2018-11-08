#include <stdio.h>

/**
 * Fibnoacci-Folge als While-Schleife
 */
int fiboWhile(void)
{
	int a=0, b=1, c=0;
	printf("Start der Folge mit while-Schleife\n");
	while(c<22)
	{	
		printf("%d ",c);
		c = a + b;
		a = b;
		b = c;
	}	
	printf("\nEnde der Folge\n");
}

/**
 * Fibonacci-Folge als Do-While-Schleife
 */
int fiboDoWhile(void)
{
	int a=0, b=1, c=0;
	printf("Start der Folge mit do-while-Schleife\n");
	do
	{
		printf("%d ",c);
		c = a + b;
		a = b;
		b = c;
	}
	while(c<22);
	printf("\nEnde der Folge\n");

}

/**
 * Fibonacci-Folge als For-Schleife
 */
int fiboFor(void)
{
	int a=0, b=1, c=0;
	printf("Start der Folge mir for-Schliefe\n");
	for(int i=0; i<8; i++)
	{
		printf("%d ",c);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\nEnd der Folge\n");
}

/**
 * Fibonacci-Folge main
 */

int main(void)
{
	fiboWhile();
	fiboDoWhile();
	fiboFor();
}
