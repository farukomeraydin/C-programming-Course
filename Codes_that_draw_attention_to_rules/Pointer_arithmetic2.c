#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int(*p)[10] = &a;

	//(*p) means a
	for (int i = 0; i < 10; ++i)
		printf("%d ", (*p)[i]);
}
