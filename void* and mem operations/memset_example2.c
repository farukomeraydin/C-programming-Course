#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	int idx, n;
	printf("Enter an index and size: ");
	scanf_s("%d%d", &idx, &n);

	memset(a + idx, 0, n * sizeof(int));
	display_array(a, SIZE);
}
