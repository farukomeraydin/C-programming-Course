#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	int n;
	printf("How many terms will be summed: ");
	scanf("%d", &n);
	double sum = 0.;
	int i;
	for (i = 0; i < n; ++i)
	{
		if (i % 2 == 0)
			sum += 1. / (2 * i + 1);
		else
			sum -= 1. / (2 * i + 1);
	}
	printf("%f\n", 4. * sum);
}
