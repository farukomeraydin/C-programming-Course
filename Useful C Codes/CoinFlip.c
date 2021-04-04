#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	int n;
	int heads_count = 0;
	printf("How many times coin will be flipped: ");
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		if (rand() % 2 == 0)
			++heads_count;
	}
	printf("Probability of heads: %f\n", (double)heads_count / n);
}
