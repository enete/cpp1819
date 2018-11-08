#include <stdio.h>
/**
 * Fibonacci-Zahlen mit for-Struktur
 */
int main(void)
{
	int a=0, b=1, c=0;

	printf("Start der Folge bis 21 mit for-Schleife\n");
	for(int i; i < 8; i++)
	{
		printf("%d ", c);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\nEnde der Folge!\n");
	return 0;
}
