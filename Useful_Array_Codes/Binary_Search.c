#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	100

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	sort_array(a, SIZE);
	display_array(a, SIZE);
	int x;

	printf("Enter an integer number: ");
	scanf("%d", &x);

	int idx_first = 0;
	int idx_last = SIZE - 1;
	int idx_mid;
	while (idx_first <= idx_last) {
		idx_mid = (idx_first + idx_last) / 2;
		if (a[idx_mid] == x)
			break;
		if (a[idx_mid] > x)
			idx_last = idx_mid - 1;
		else
			idx_first = idx_mid + 1;
	}
	if (idx_first > idx_last)
		printf("Number cannot found\n");
	else
		printf("Number found.....a[%d] = %d\n", idx_mid, a[idx_mid]);
}
