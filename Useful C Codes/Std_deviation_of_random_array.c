#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];

	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	printf("Std. deviation = %f\n", get_std_dev(a, SIZE));
}
