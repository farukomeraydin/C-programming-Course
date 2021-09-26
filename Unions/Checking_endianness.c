#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef union {
	unsigned int uval;
	unsigned char s[4];
}Data;

int main(void)
{
	Data dx = { .uval = 0xFABC3DEA };
	//You can check endianness with this

	printf("%X\n", dx.s[0]);
	printf("%X\n", dx.s[1]);
	printf("%X\n", dx.s[2]);
	printf("%X\n", dx.s[3]);
}
