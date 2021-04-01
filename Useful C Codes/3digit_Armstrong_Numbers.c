#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	printf("3 digit Armstrong numbers: \n");
	for (int i = 100; i < 1000; ++i) {
		int d1 = i / 100;
		int d2 = i / 10 % 10;
		int d3 = i % 10;

		if (i == (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3))
			printf("%d\n", i);
	}

}
