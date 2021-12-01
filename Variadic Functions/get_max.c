#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int get_max(int n, ...) {
	va_list args;
	va_start(args, n);

	int max;

	for (int i = 0; i < n; ++i) {
		int val = va_arg(args, int);
		if (i == 0)
			max = val;
		else if (val > max)
			max = val;
	}

	va_end(args);
	return max;
}

int main()
{
	int x, y, z;
	printf("Enter 3 integers: ");
	scanf("%d%d%d", &x, &y, &z);

	int max = get_max(4, x, y, z, 355);
	printf("max = %d\n", max);
}
