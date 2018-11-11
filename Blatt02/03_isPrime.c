#include <stdio.h>
#include <stdlib.h> //atoi

/**
 * main a
 */
int main(int argc, char *argv[]) 
{	
	int eingabe = (argc > 1) ? atoi (argv[1]) : 0;

	printf("Zahl: %d \n", eingabe);
	int a = 2;

	while(a <= eingabe)
	{
		if(a == eingabe)
		{
			printf("%d ist keine Primzahl!\n", eingabe);
		}
		a = a + 2;
	}
	
	int zahl = 2;
	int ergebnis = 0;
	for(int a; a<(eingabe/2); a++)
	{
		printf("a: %d, ergebnis: %d, zahl: %d \n", a, ergebnis, a);
		ergebnis = eingabe % zahl;
		zahl++;

	}
	return 0;
		
}
