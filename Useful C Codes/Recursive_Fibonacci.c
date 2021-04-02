#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	clock_t start = clock();
	int a[50];
	for (int i = 0; i < 40; ++i)
	{
		a[i] = fibo_r(i);
	}
	clock_t end = clock();
	printf("%.12f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
	_getch();
	for (int i = 0; i < 40; ++i)
	{
		printf("%d   %d\n", i, a[i]);
	}
}
