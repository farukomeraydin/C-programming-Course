#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include <stdint.h>

typedef union {
	uint32_t uval;
	struct {
		unsigned int bit0 : 1;
		unsigned int bit1 : 1;
		unsigned int bit2 : 1;
		unsigned int bit3 : 1;
		unsigned int bit4 : 1;
		unsigned int bit5 : 1;
		unsigned int bit6 : 1;
		unsigned int bit7 : 1;
		unsigned int bit8 : 1;
		unsigned int bit9 : 1;
		unsigned int bit10 : 1;
		unsigned int bit11 : 1;
		unsigned int bit12 : 1;
		unsigned int bit13 : 1;
		unsigned int bit14 : 1;
		unsigned int bit15 : 1;
		unsigned int bit16 : 1;
		unsigned int bit17 : 1;
		unsigned int bit18 : 1;
		unsigned int bit19 : 1;
		unsigned int bit20 : 1;
		unsigned int bit21 : 1;
		unsigned int bit22 : 1;
		unsigned int bit23 : 1;
		unsigned int bit24 : 1;
		unsigned int bit25 : 1;
		unsigned int bit26 : 1;
		unsigned int bit27 : 1;
		unsigned int bit28 : 1;
		unsigned int bit29 : 1;
		unsigned int bit30 : 1;
		unsigned int bit31 : 1;
		unsigned int bit32 : 1;
	};
}Myint;


int main(void)
{
	Myint x = { .uval = 0 };
	x.bit5 = 1;
	x.bit10 = 1;
	x.bit15 = 1;
	x.bit23 = 1;

	printf("%u\n", x.uval);
	bprint(x.uval);
}
