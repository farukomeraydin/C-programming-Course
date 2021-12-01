#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	
	int a[10] = { [5] = 23, [7] = 35, [9] = 2, [3] = 2};

	for (int i = 0; i < (int)asize(a); ++i) {
		printf("a[%d] = %d\n", i, a[i]);
	}
}
