#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int a[5][12];
	int b[4][8];
	int c[10][20];
	int d[7][12];

	randomize();

	set_matrix_12(a, 5);
	set_matrix_8(b, 4);
	set_matrix_20(c, 10);
	set_matrix_12(d, 7);

	display_matrix_12(a, 5);
	display_matrix_8(b, 4);
	display_matrix_20(c, 10);
	display_matrix_12(d, 7);
}
