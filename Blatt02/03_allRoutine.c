#include <stdio.h>
#include <stdlib.h> //atoi

/*
 */
void kgv(int n, int m)
{

}
/*
 */
void ggt(int n, int m)
{

}

/*
 * Primzahl Test
 */
void isPrime(int eingabe)
{	
	int counter = 0;
	int zahl = 1;
	int ergebnis = 0;

	for(int a = 0; a<eingabe; a++)
	{
		ergebnis = eingabe % zahl;
		if(ergebnis == 0)
		{
			counter++;
		}
		//printf("Counter: %d Ergebnis: %d a: %d zahl: %d \n", counter, ergebnis, a, zahl);	
		zahl++;
	}

	if(counter == 2)
	{
		printf("%d ist eine Primzahl!\n", eingabe);
	}
	else
	{
		printf("%d ist keine Primzahl!\n", eingabe);
	}		
}

int main(int argc, char *argv[])
{
	// Primzahlen
	for(int i = 1; i<24; i++)
	{
		isPrime(i);
	}

	return 0;
}
