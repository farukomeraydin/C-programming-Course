#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include "Omer.h"


int main()
{
	int a[5][6] = {
		{1, 2, 3, 6, 8, 12},
		{-1, -4, -6, -2, -6},
		{12, 41, 67, 26, 68},
		{2, 2, 2, 2, 1, 6},
		{8, 10, 12, 14, 17, 236},
	};

	for (int i = 0; i < 5; ++i) {
		for (int k = 0; k < 6; ++k)
			printf("%4d ", a[i][k]);
		printf("\n");
	}
	printf("\n\n\n");
	int n = 5 * 6;
	int *p = &a[0][0];

	while (n--) {
		printf("%d ", *p++);
		_getch();
	}
}
