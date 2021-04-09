#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

#define SIZE	20

int main()
{
	int a[SIZE];
	int b[SIZE];
	int c[2 * SIZE];
	randomize();

	set_random_array(a, SIZE);
	set_random_array(b, SIZE);
	sort_array(a, SIZE);
	sort_array(b, SIZE);
	display_array(a, SIZE);
	display_array(b, SIZE);

	int idx_a = 0, idx_b = 0;
	for (int i = 0; i < 2 * SIZE; ++i)
	{
		if (idx_a == SIZE)
			c[i] = b[idx_b++];
		else if (idx_b == SIZE)
			c[i] = a[idx_a++];
		else if (a[idx_a] < b[idx_b])
			c[i] = a[idx_a++];
		else
			c[i] = b[idx_b++];
	}
	display_array(c, 2 * SIZE);
}
