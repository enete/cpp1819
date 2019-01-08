#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* formatMoney(int64_t cents) {
	bool isNegative = cents < 0;
	cents = (isNegative ? -cents : cents);
	int64_t euros = cents/100;
	cents -= 100*euros;

	size_t characterCount = 0;
	if(isNegative) characterCount++;	//space for the sign
	for(int64_t i = euros; i; i /= 10) characterCount++;	//space for the full euros
	if(!euros) characterCount++;	//space for the zero if we don't have full euros
	characterCount += 3;	//space for the dot and the two cent digits
	characterCount += strlen(" euros");	//space for unit string

	char* result = malloc(characterCount + 1);	//+1 for the terminating null byte
	sprintf(result, "%s%"PRId64".%02"PRId64" euros", (isNegative ? "-" : ""), euros, cents);
	return result;
}

void printMoney(uint64_t cents) {
	char* string = formatMoney(cents);
	printf("formatMoney(%"PRId64") = %s\n", cents, string);
	free(string);
}

int main() {
	printMoney(-196720000000000);
	printMoney(-314);
	printMoney(-31);
	printMoney(-3);
	printMoney(0);
	printMoney(2);
	printMoney(27);
	printMoney(271);
}
