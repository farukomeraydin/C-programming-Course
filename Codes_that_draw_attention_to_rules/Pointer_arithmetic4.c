#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int row, col;
	printf("Enter row and col: ");
	scanf("%d%d", &row, &col);

	int* pd = (int*)malloc(row * col * sizeof(int));
	if (!pd) {
		printf("Memory is insufficient\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < row; ++i)
	{
		for (int k = 0; k < col; ++k) {
			//pd[i][k] will be error instead
			pd[i * col + k] = rand() % 10;
		}
	}

	for (int i = 0; i < row; ++i)
	{
		for (int k = 0; k < col; ++k) {
			printf("%d", pd[i * col + k]);
		}
		printf("\n");
	}

	free(pd);
}
