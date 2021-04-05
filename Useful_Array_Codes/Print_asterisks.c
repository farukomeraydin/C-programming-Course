#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	20

int main()
{
	randomize();
	int a[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		a[i] = rand() % 20 + 1;
		printf("%3d ", a[i]);
	}
	printf("\n\n");
	for (int i = 0; i < SIZE; ++i) {
		for (int k = 0; k < a[i]; ++k)
			putchar('*');
		putchar('\n');
	}
}
