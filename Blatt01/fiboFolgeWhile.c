#include <stdio.h>
/**
 * Fibonacci-Zahlen in While-Struktur
 */
int main(void)
{
	int a=0, b=1, c=0;

	printf("Start der Folge bis 21 mit while-Schleife\n");
	while(c<22)
	{
		printf("%d ",c);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\nEnde der Folge\n");
	return 0;
}
