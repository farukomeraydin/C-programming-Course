#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"
#include "vector.h"

void print_vector(HVector hvec) {
	printf("size = %zu  capacity = %zu\n", getSize(hvec), getCapacity(hvec));
	
	for (size_t i = 0; i < getSize(hvec); ++i)
		printf("%d ", getElem(hvec, i));

	printf("\n---------------------------------------\n");
}

int main()
{
	HVector hvec = createVectorWithValue(5, 7);
	print_vector(hvec);
	pushBack(hvec, 9);
	print_vector(hvec);
	for (int i = 0; i < 20; ++i)
		pushBack(hvec, i);
	print_vector(hvec);
}
