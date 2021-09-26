#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define  econ16(x)  ((x) << 8) | ((x) >> 8 & 0xFF)

int main(void)
{
	unsigned int x = 0x58f792ac;
	printf("%X\n", x);
	printf("%X\n", econ32(x));
}
