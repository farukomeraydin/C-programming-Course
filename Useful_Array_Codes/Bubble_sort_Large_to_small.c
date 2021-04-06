#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	100

int main()
{
	randomize();
	int a[SIZE];
	for (int i = 0; i < SIZE; ++i)
	{
		a[i] = rand() % 1000;
		printf("%3d%c", a[i], i % 20 == 19 ? '\n' : ' ');
	}
	printf("\n");
	for (int i = 0; i < SIZE - 1; ++i)
		for (int k = 0; k < SIZE - 1 - i; ++k)
			if (a[k] < a[k + 1]) {
				int temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
	for (int i = 0; i < SIZE; ++i)
		printf("%3d%c", a[i], i % 20 == 19 ? '\n' : ' ');
	printf("\n");
}
