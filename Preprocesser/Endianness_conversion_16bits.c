#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include <stdint.h>

int main()
{
	uint16_t x = 0x58F7;
	printf("%X\n", x);
	uint16_t y = econ16(x);
	printf("%X\n", y);
}

