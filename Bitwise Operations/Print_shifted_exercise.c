#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	int ival = 1;

	while (ival) {
		bprint(ival);
		ival <<= 1;
	}
}
