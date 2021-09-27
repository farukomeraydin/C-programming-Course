#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef union _Dtcon {
	unsigned int uval;
	struct {
		unsigned int mday : 5;
		unsigned int mon : 4;
		unsigned int year : 7;
		unsigned int hour : 5;
		unsigned int min : 6;
		unsigned int sec : 5;
	};
}Dtcon;

int main(void)
{
	Dtcon x = {
		.mday = 4,
		.mon = 4,
		.year = 2020 - 1980,
		.hour = 20,
		.min = 29,
		.sec = 58 / 2
	};
	printf("%u\n", x.uval);
	bprint(x.uval);
}
