#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main(void)
{
	size_t n;
	printf("How many integers: ");
	scanf_s("%zu", &n);
	int *pd = (int*)malloc(n * sizeof(int));
	if (!pd) {
		printf("Memory doesn't have enough space\n");
		exit(EXIT_FAILURE);
	}
	set_random_array(pd, n);
	bsort(pd, n);
	display_array(pd, n);
	free(pd);
}
