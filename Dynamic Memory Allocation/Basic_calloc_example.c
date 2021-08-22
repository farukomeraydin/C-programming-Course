#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	size_t n;

	printf("How many integers: ");
	scanf_s("%zu", &n);
	int *pd = (int*)calloc(n, sizeof(int));
	display_array(pd, n);
	free(pd);
}
