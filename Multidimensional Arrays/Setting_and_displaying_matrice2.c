#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int a[10][20];
	int b[5][10];
	int c[8][4];

	randomize();

	set_random_matrix(a, 10, 20);
	set_random_matrix(b, 5, 10);
	set_random_matrix(c, 8, 4);

	display_matrix(a, 10, 20);
	display_matrix(b, 5, 10);
	display_matrix(c, 8, 4);
}
