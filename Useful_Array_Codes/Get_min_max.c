#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];

	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);

	int min, max;
	get_minmax(a, SIZE, &max, &min);
	printf("min = %d	max = %d\n", min, max);
}
