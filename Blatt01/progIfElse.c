#include <stdio.h> //printf
#include <stdlib.h> //atoi - convert string to integer

int main(int argc, char *argv[])
{
	int val = (argc > 1) ? atoi(argv[1]) : 0;

	if(val == 0)
	{
		printf("null\n");
	}
	if(val == 1)
	{
		printf("eins\n");
	}
	if(val == 2)
	{
		printf("zwei\n");
	}
	if(val == 3)
	{
		printf("drei\n");
	}
	if(val == 4)
	{
		printf("vier\n");
	}
	if(val == 5)
	{
		printf("fuenf\n");
	}
	if(val == 6)
	{
		printf("sechs\n");
	}
	if(val == 7)
	{
		printf("sieben\n");
	}
	if(val == 8)
	{
		printf("acht\n");
	}
	if(val == 9)
	{
		printf("neun\n");
	}
}
