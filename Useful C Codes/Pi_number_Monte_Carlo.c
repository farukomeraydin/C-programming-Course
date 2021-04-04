#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	double x, y;
	int in = 0, out = 0;
	for (int i = 0; i < 100000; ++i)
	{
		x = (double)rand() / RAND_MAX;
		y = (double)rand() / RAND_MAX;
		if (sqrt(x * x + y * y) <= 1)
			++in;
		else
			++out;
	}
	printf("%f is pi number", 4 * (double)in / (in + out));
}
