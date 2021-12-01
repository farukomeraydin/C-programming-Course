#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int row, int col) {
	int a[row][col];

	int(*p)[row][col] = &a;
    (*p)[1][3] = 5;
	///
}

int main()
{
	func(10, 20);
}
