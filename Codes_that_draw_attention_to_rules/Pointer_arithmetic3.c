#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main()
{
	int a[5][3] = { [2] = {2, 2, 2},[4] = {4, 4, 4} };

	int(*p)[5][3] = &a;

	for (int i = 0; i < 5; ++i)
	{
		for (int k = 0; k < 3; ++k) {
			printf("%d ", (*p)[i][k]);
		}
		printf("\n");
	}
}
