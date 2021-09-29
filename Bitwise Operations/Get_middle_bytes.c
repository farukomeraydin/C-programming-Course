#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include <stdint.h>

int main()
{
	uint16_t x = 0xABCD;
	printf("%X\n", x);
	printf("%X\n", (uint8_t)(x << 4 >> 8));
}
