#include <stdio.h>
#include <string.h>

int main() {
	int i = 42;
	char bytes[sizeof(i)];
	memcpy(bytes, &i, sizeof(i));
	printf("%d\n", *bytes);
}
