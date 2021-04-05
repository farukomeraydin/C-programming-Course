#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	22

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
	int sum_odds = 0;
	int odd_cnt = 0;
	for (int i = 0; i < SIZE; ++i)
		if (a[i] % 2 != 0) {
			sum_odds += a[i];
			++odd_cnt;
		}
	if (odd_cnt)
		printf("Average of odd numbers: %f\n", (double)sum_odds / odd_cnt);
	else
		printf("No odd number exists.\n");
}
