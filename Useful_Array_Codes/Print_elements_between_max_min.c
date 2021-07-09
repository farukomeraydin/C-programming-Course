#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);

	int* pmax = get_array_max2(a, SIZE);
	int* pmin = get_array_min(a, SIZE);

	if (pmax > pmin) {
		int *p = pmin;
		while (p <= pmax)
			printf("%3d ", *p++);
	}
	else {
		int* p = pmax;
		while (p <= pmin)
			printf("%3d ", *p++);
	}
	printf("\n");
}
