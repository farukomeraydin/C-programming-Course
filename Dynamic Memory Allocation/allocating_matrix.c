#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main(void)
{
	size_t row, col;

	printf("Row and column number in matrix: ");
	scanf_s("%zu%zu", &row, &col);

	int** pd = (int**)malloc(row * sizeof(int*));
	if (!pd) {
		printf("Memory doesn't have space\n");
		return 1;
	}

	for (size_t i = 0; i < row; ++i) {
		pd[i] = (int*)malloc(col * sizeof(int));
		if (!pd[i]) {
			printf("Memory doesn't have space\n");
			return 1;
		}
	}

	randomize();
	for (size_t i = 0; i < row; ++i)
		for (size_t k = 0; k < col; ++k)
			pd[i][k] = rand() % 10;
		
	for (size_t i = 0; i < row; ++i) {
		for (size_t k = 0; k < col; ++k)
			printf("%d ", pd[i][k]);
		printf("\n");
	}
	printf("\n\n");

	for (size_t i = 0; i < row; ++i)
		free(pd[i]);

	free(pd);
}
