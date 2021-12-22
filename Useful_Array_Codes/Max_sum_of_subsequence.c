#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

/*This function returns the sum of any subsequence of an array*/
int sum_windowed_array(const int* p, int index1, int index2) {
	int sum = 0;
	while (index2 != index1) {
		sum += *(p + index2);
		--index2;
	}
	sum += *(p + index2);
	return sum;
}

int main()
{	
	int a[] = {
		395, -135, 652, 126, -247, 766, 173, -333, 312, 307, 82, 737, 635, 706, 442, 897, 934, 3, 637, -54,
	-508, -866, -504, -991, 461, -840, -653, -975, 171, 304, 712, 194, -478, -683, 756, 203, 737, 61, 292, -321,
	-963, -813, 722, -654, -151, -489, 364, 526, 772, -256, -882, -166, 822, 46, 649, -90, 507, -267, -603, 446,
	-487, 228, -724, 590, -912, 345, -694, -390, -235, -61, -191, 459, -901, 713, -38, -648, -210, 801, 697, -546,
	418, -422, 842, -787, -103, 426, -805, -51, 537, -744, -44, -554, 778, 801, -851, -248, -90, 735, 940, 734, };


	int size = (sizeof(a) / sizeof(a[0]));
	int sum = 0;
	int max = 0;
	int first_idx, last_idx = 0;
	for (int i = 0; i < size; ++i)
		for (int k = i; k < size; ++k)
		{
			sum = sum_windowed_array(a, i, k);
			if (sum > max) {
				max = sum;
				first_idx = i;
				last_idx = k;
			}
		}
		
	printf("Max sum of subsequence is %d.\nThe subsequence index interval is %d-%d\n", max, first_idx, last_idx);
}
