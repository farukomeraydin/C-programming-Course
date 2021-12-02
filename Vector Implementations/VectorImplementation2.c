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
	HVector hvec = createVectorWithValue(20, 0);
	print_vector(hvec);
	reserve(hvec, 50);
	print_vector(hvec);
}
