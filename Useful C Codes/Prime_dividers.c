#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	int x;
	printf("Enter an integer number: ");
	scanf("%d", &x);
	int n = 2;
	while (x != 1) {
		while (x % n == 0) {
			printf("%d ", n);
			x /= n;
		}
		++n;
	}
}
