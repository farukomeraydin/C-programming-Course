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
		a[i] = rand() % 10;
		printf("%3d%c", a[i], i % 20 == 19 ? '\n' : ' ');
	}
	printf("\n\n");
	int cnt = 1;
	for (int i = 1; i < SIZE; ++i)
		if (a[i] != a[i - 1]) {
			a[cnt] = a[i];
			++cnt;
		}
	for (int i = 0; i < cnt; ++i)
		printf("%3d ", a[i]);

}
