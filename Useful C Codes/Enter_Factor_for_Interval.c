#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include <stdio.h>
#include "Omer.h"
#include "Mytime.h"

int main()
{
	int low, high, n;
	printf("Enter an interval: ");
	scanf("%d%d", &low, &high);
	printf("Can be divided by what integer? ");
	scanf("%d", &n);

	int temp = low;
	int cnt = 0;

	while (temp <= high) {
		if (temp % n == 0) {
			printf("%d ", temp);
			++cnt;
		}
		++temp;
	}
	printf("\n In the [%d %d] interval denominator %d can divide %d numbers ", low, high, n, cnt);
}
