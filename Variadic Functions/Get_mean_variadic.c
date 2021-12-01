#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include <stdarg.h>

double get_mean_variadic(int n, ...) {
	va_list args;
	va_start(args, n);
	int sum = 0;

	for (int i = 0; i < n; ++i) {
		sum += va_arg(args, int);
	}

	va_end(args);
	return (double)sum / n;
}


int main()
{
	int x = 11;
	int y = 30;
	int z = 50;

	double mean = get_mean_variadic(3, x, y, z);
	printf("mean = %f\n", mean);
}
