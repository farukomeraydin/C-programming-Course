#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	
	int a[10][10] = { [2] = {1, 1, 1},[4] = {2, 2, 2},[6] = {[5] = 4} };
	for (int i = 0; i < 10; ++i) {
		for (int k = 0; k < 10; ++k)
			printf("%d", a[i][k]);
		printf("\n");
	}
}
