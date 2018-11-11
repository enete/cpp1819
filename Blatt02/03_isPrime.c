#include <stdio.h>
#include <stdlib.h> //atoi

/**
 * main a
 */
int main(int argc, char *argv[]) 
{	
	int eingabe = (argc > 1) ? atoi (argv[1]) : 0;

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

	return 0;		
}
