#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	greverse(a, SIZE, sizeof(int));
	display_array(a, SIZE);

	double b[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	greverse(b, asize(b), sizeof(*b));

	for (size_t i = 0; i < asize(b); ++i)
		printf("%f\n", b[i]);
}
