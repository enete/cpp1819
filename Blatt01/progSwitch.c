#include <stdio.h> //printf
#include <stdlib.h> //atoi - convert string to integer

int main(int argc, char *argv[])
{
	int val = (argc > 1) ? atoi(argv[1]) : 0;

	switch(val)
	{
		case 0:
			printf("null\n");
			break;
		case 1: 
			printf("eins\n");
			break;
		case 2:
			printf("zwei\n");
			break;
		case 3: 
			printf("drei\n");
			break;
		case 4: 
			printf("vier\n");
			break;
		case 5: 
			printf("fuenf\n");
			break;
		case 6:
			printf("sechs\n");
			break;
		case 7: 
			printf("sieben\n");
			break;
		case 8:
			printf("acht\n");
			break;
		case 9: 
			printf("neun\n");
			break;
		default:
			printf("shit\n");
			break;
	}
	
}
