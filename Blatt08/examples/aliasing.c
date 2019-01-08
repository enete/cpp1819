#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

typedef union {
	float f;
	uint32_t i;
} Punner;

int main() {
	float foo = 42.0;
	uint32_t* bits = (uint32_t*)&foo;
	printf("bits of float: %08"PRIx32"\n", *bits);

	union { float f; uint32_t i; } bar = { .f = 42 };
	printf("bits of float: %08"PRIx32"\n", bar.i);
}
