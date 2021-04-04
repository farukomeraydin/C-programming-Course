#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

generate_max_function(int)
generate_max_function(unsigned)
generate_max_function(double)
generate_max_function(float)

int main()
{
	int a[20];
	unsigned b[20];
	double c[5] = { 12.2, 3.4, 5.0, 1.1, 56.6};
	float d[5] = {4.8, 7.2, 8.8, 10.5, 4.9};

	set_random_array(a, 20);
	set_random_array(b, 20);
	printf("%d\n", maxarray_int(a, 20));
	printf("%d\n", maxarray_unsigned(b, 20));
	printf("%f\n", maxarray_double(c, 5));
	printf("%f\n", maxarray_float(d, 5));

}
