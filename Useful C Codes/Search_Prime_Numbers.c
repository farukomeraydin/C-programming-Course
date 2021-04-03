#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	int k;
	clock_t start = clock();
	for (k = 2; k < 7777; ++k) {
		if (isprime(k) == 1)
			printf("%d\n", k);
	}
	clock_t end = clock();
	printf("Total time span = %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
}
