#include <stdio.h>

int OO00O(int eingabe) //0 entfernt + Rückgabewert int ergänzt
{
	return eingabe*eingabe;
}

char testfunktion00()
{
	char output = 'A';
	printf("Diese Funktion testet auch etwas\n");
	return output; //return hinzugefügt
}

void testfunktion01(char eingabe)
{
	printf("Eingabe war %c\n", eingabe); //%c für asci 
}


int main()
{
	int counter = 0; // = entfernt, falsche Zuweisung 
	char beliebigesZeichen = 'J'; // - entfernt
	char charOut;

	for(;;) // ; entfernt
	{
		counter++; // + entfernt 
		OO00O(counter); // 0 entfernt, - entfernt, beliebigesZeichen entfernt 
		charOut = testfunktion00();
		testfunktion01(charOut);
		if(counter%10 == 0) // = hinzugefügt
		{
			printf("Testausgabe: %d\n",counter); //Test-Ausgabe
			break;
		}
	}
	testfunktion00(); // 00 hinzugefügt

	printf("Das Programm konnte erfolgreich kompiliert werden!\n"); // ; hinzugefügt
	return 0;
}


