#include <stdio.h>

char* formatTemperature(double value, const char* unit) {
	char result[10];
	//Variable besteht nur in der function 
	sprintf(result, "%f degree %s", value, unit);
	//sprintf speichert in result (zu klein)
	//%lf statt %f weil value ist ein double
	//kein return
}

int main() {
	printf("enter a temperature in degree F: ");
	double fahrenheit;
	scanf("%lf", &fahrenheit);
	// Keine Fehlerüberprüfung beim einlesen
	double celsius = (fahrenheit - 32)/1.8;
	char* formattedTemperature = formatTemperature(celsius, "C");
	// Pointer auf null
	printf("the temperatures is %s\n", formattedTemperature);
}
