#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable: 6031)
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];
	int b[SIZE] = { 0 };
	int idxa, idxb, n;

	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);

	printf("Enter the index of a, b arrays and element number: ");
	scanf("%d%d%d", &idxa, &idxb, &n);

	copy_array(b + idxb, a + idxa, n);
	display_array(b, SIZE);
}
