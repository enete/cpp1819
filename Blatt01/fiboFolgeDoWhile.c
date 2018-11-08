#include <stdio.h>
/**
 * Fibonacci-Zahlen mit do-while-Struktur
 */
int main(void)
{
	int a=0, b=1, c=0;

	printf("Start der Folge bis 21 mit do-while-Schleife\n");
	do
	{
		printf("%d ", c);
		c = a + b;
		a = b;
		b = c;
	}
	while(c<22);
	printf("\nEnde der Folge");
	return 0;
}
