#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);

	qsort(a, SIZE, sizeof(int), &icmp);

	display_array(a, SIZE);

	double da[] = { 9.8, 7.2, 45.78, 1.29, 8.7, 4.5, 87.61, 6.78, 92.57, 69.81, 245.78, 8.714 };
	qsort(da, asize(da), sizeof(*da), &dcmp);

	for (size_t i = 0; i < asize(da); ++i)
		printf("%f\n", da[i]);
}
