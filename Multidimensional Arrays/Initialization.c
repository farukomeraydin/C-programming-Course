#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int a[4][6] = {
		{1, 2, 3, 6, 8, 12},
		{1, 4, 6, 2, 6},
		{12, 41, 67, 26, 68},
		{2, 2, 2, 2, 2, 2},
	};

	for (int i = 0; i < 4; ++i) {
		for (int k = 0; k < 6; ++k)
			printf("%4d ", a[i][k]);
		printf("\n");
	}
}
