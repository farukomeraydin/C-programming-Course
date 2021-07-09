#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);

	int *pmax = get_array_max2(a, SIZE);
	printf("Max value = %d and its index = %d", *pmax, (int)(pmax - a));
}
