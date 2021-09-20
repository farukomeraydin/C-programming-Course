#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include <stdint.h>

typedef union {
	struct {
		uint16_t low_bytes;
		uint16_t high_bytes;
	};
	uint32_t uval;
}Myint;

int main(void)
{
	Myint mx = { .uval = 875424u };
	printf("%u\n", mx.low_bytes);
	printf("%u\n", mx.high_bytes);
}
