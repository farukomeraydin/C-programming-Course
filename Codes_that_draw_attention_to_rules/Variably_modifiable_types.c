#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int row, col;
	printf("Enter row and col: ");
	scanf("%d%d", &row, &col);

	int(*pd)[row][col] = malloc(sizeof(*pd)); //Equivalent to sizeof(int)*row*col
    printf("sizeof(*pd) = %zu\n", sizeof(*pd));
	
	if (!pd) {
		printf("Memory is insufficient\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < row; ++i)
	{
		for (int k = 0; k < col; ++k) {
			(*pd)[i][k] = rand() % 10;
		}
	}

	for (int i = 0; i < row; ++i)
	{
		for (int k = 0; k < col; ++k) {
			printf("%d", (*pd)[i][k]);
		}
		printf("\n");
	}

	free(pd);
}
