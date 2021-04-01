#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	clock_t start = clock();

	for (int i = 10; i < 999'999'99; ++i) {
		if (isarmstrong(i))
			printf("%d\n", i);
	}
	clock_t end = clock();
	printf("Total span = %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
}
