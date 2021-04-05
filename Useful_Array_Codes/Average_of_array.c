#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	100

int main()
{
	int a[SIZE];
	randomize();
	for (int i = 0; i < SIZE; ++i)
	{
		a[i] = rand() % 1000;
		printf("%3d%c", a[i], i % 20 == 19 ? '\n' : ' ');
	}
	printf("\n\n");
	int sum = 0;
	for (int i = 0; i < SIZE; ++i)
	{
		sum += a[i];
	}
	printf("Average = %f\n", (double)sum / SIZE);
}
