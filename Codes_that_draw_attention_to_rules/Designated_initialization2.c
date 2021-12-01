#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	
	int a[5][3] = { [2] = {1, 1, 1},[4] = {2, 2, 2} };
	for (int i = 0; i < 5; ++i) {
		for (int k = 0; k < 3; ++k)
			printf("%d", a[i][k]);
		printf("\n");
	}
}
