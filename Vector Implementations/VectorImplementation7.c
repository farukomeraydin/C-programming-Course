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
	HVector hvec = createVectorWithArray((int[]) { 1, 4, 7, 1, 8, 1, 9, 1, 1, 5, 13, 1 }, 12);
	print_vector(hvec);
	size_t n = removeElems(hvec, 1);
	print_vector(hvec);
	printf("%zu elements were removed\n", n);
}
