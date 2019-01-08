#include <stdio.h>

char* formatTemperature(double value, const char* unit) {
	char result[10];
	sprintf(result, "%f degree %s", value, unit);
}

int main() {
	printf("enter a temperature in degree F: ");
	double fahrenheit;
	scanf("%lf", &fahrenheit);
	double celsius = (fahrenheit - 32)/1.8;
	char* formattedTemperature = formatTemperature(celsius, "C");
	printf("the temperatures is %s\n", formattedTemperature);
}
