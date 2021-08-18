#define _CRT_SECURE_NO_WARNINGS
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
	int *p = &a[0][0];
	for (int i = 0; i < 30; ++i)
		printf("%3d%c", p[i], i % 6 == 5 ? '\n' : ' ');
}
