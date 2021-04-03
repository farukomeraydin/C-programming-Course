#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	int n;
	printf("How many terms of the series will be summed: ");
	scanf("%d", &n);
	double sum = 0.;
	int i;
	for (i = 0; i < n; ++i)
	{
		sum += 1. / factorial(i);
	}
	printf("sum = %f\n", sum);
}
