#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"


int main(void)
{
	size_t n;

	printf("How many elements in array: ");
	scanf_s("%zu", &n);
	int* pd = malloc(n * sizeof(int));
	if (!pd) {
		printf("Memory doesn't have enough space\n");
		return 1;
	}
	set_random_array(pd, n);

	printf("Sorting began\n");
	clock_t start = clock();
	sort_array(pd, n);
	clock_t end = clock();
	double sec = (double)(end - start) / CLOCKS_PER_SEC;

	printf("Sorting ended.It took %f seconds.Press any button.\n", sec);
	_getch();
	display_array(pd, n);
	free(pd);
}
