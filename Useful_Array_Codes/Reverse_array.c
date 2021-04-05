#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	20

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
	for (int i = 0; i < SIZE / 2; ++i)
	{
		int temp = a[i];
		a[i] = a[SIZE - 1 - i];
		a[SIZE - 1 - i] = temp;
	}
	for (int i = 0; i < SIZE; ++i)
		printf("%3d%c", a[i], i % 20 == 19 ? '\n' : ' ');

	printf("\n\n");

}
