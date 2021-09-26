#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main(void)
{
	unsigned int x = 0x58f792ac;
	printf("%X\n", x);
	printf("%X\n", econ32(x));
}
