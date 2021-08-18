#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#define SIZE	20

int main()
{
	int a[SIZE];
	int b[SIZE] = { 0 }; 

	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);

	size_t idx_a, idx_b, n;
	printf("Enter index for a,b and number of elements respectively: ");
	scanf_s("%zu%zu%zu", &idx_a, &idx_b, &n);
	memcpy(b + idx_b, a + idx_a, n * sizeof(int));

	display_array(b, SIZE);
}
