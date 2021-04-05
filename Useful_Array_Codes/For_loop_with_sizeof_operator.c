#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	int a[] = { 2, 6, 7, 1, 8, 9, 2, 13, 19, 29, 33, 78, 90, 123 };
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
		printf("%d ", a[i]);
	printf("\n");
}
