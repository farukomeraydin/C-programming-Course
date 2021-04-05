#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];
	int b[SIZE] = { 0 };
	randomize();
	for (int i = 0; i < SIZE; ++i)
	{
		a[i] = rand() % 10;
		printf("%3d%c", a[i], i % 20 == 19 ? '\n' : ' ');
	}
	printf("\n\n");
	int val;
	printf("Enter a number: ");
	scanf("%d", &val);
	int cnt = 0;

	for (int i = 0; i < SIZE; ++i)
		if (a[i] != val)
			b[cnt++] = a[i];

	for (int i = 0; i < cnt; ++i)
		printf("%3d ", b[i]);
	printf("\n");

	for (int i = 0; i < SIZE; ++i)
		printf("%3d ", b[i]);
	printf("\n");
}
