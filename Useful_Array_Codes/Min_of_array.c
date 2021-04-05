#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE + 1];
	randomize();
	for (int i = 0; i < SIZE; ++i)
	{
		a[i] = rand() % 1000;
		printf("%3d%c", a[i], i % 20 == 19 ? '\n' : ' ');
	}
	printf("\n\n");	

	int min = a[0];
	for (int i = 1; i < SIZE; ++i)
		if (a[i] < min)
			min = a[i];
	printf("min = %d\n", min);
}
