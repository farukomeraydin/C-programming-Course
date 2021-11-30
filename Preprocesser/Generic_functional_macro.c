#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define gmf(t)	t getmax_##t (t *p, size_t size){ \
	t max = *p; \
	for (size_t k = 1; k < size; ++k) \
		if (p[k] > max) \
			max = p[k];		return max; } \

gmf(int)
gmf(double)
gmf(long)
gmf(char)
gmf(float)

#define SIZE	100

int main()
{
	int a[SIZE];
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	int max = getmax_int(a, SIZE);
	printf("max = %d", max);
}
