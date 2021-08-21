#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	size_t row, col;

	printf("Number of rows and columns in a matrix: ");
	scanf_s("%zu%zu", &row, &col);

	int* pd = malloc(row * col * sizeof(int));
	if (!pd) {
		printf("Memory doesn't have enough space\n");
		return 1;
	}

	for (size_t i = 0; i < row; ++i)
		for (size_t k = 0; k < col; ++k)
			pd[i * col + k] = rand() % 10;

	for (size_t i = 0; i < row; ++i) {
		for (size_t k = 0; k < col; ++k)
			printf("%d ", pd[i * col + k]);

		printf("\n");
	}
	free(pd);
}
