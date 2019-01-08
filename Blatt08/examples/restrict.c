#include <stdio.h>

void swap(int* restrict a, int* restrict b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void swap2(int* a, int* b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

int main() {
	int a = 2, b = 4;
	swap(&a, &b);
	printf("%d%d\n", a, b);

	swap(&a, &a);
	printf("%d%d\n", a, b);
}
