#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	size_t n; //Initial size of the array
	size_t n_plus; //Number of element that will be added.

	printf("How many elements do you want? ");
	scanf_s("%zu", &n);
	int *pd = (int*)malloc(n * sizeof(int));
	if (!pd) {
		printf("Memory doesn't have enough space\n");
		return 1;
	}

	printf("Address given by malloc: (%p)\n", pd);

	randomize();
	set_random_array(pd, n);
	printf("How many more elements do you want? ");
	scanf_s("%zu", &n_plus);

	pd = (int*)realloc(pd, (n + n_plus) * sizeof(int));
	if (!pd) {
		printf("Memory doesn't have enough space\n");
		return 1;
	}
	printf("Address given by realloc: (%p)\n", pd);
	set_random_array(pd + n, n_plus);
	free(pd);
}
