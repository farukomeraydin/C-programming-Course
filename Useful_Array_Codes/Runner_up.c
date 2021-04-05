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
	int max = a[0];
	int runner_up = a[1];

	for (int i = 1; i < SIZE; ++i)
		if (a[i] > max) {
			runner_up = max;
			max = a[i];
		}
		else if (a[i] > runner_up)
			runner_up = a[i];
	printf("runner_up = %d\n", runner_up);
}
