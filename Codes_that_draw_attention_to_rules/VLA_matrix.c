#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void func(int row, int col) {
	int a[row][col];
	for (int i = 0; i < row; ++i) {
		for (int k = 0; i < col; ++k) {
			a[i][k] = rand() % 10;
		}
	}

	for (int i = 0; i < row; ++i) {
		for (int k = 0; i < col; ++k) {
			printf("%d", a[i][k]);
		}
		printf("\n");
	}
	
}

int main()
{
	int x, y;
	srand((unsigned)time(NULL));
	scanf("%d%d", &x, &y);

	func(x, y);

}
