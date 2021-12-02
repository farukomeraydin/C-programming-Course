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
	HVector hvec = createVectorWithArray((int[]) {1, 2, 3, 4, 5}, 5);
	print_vector(hvec);
	insert(hvec, 2, -1);
	print_vector(hvec);
	insert(hvec, 0, 72);
	print_vector(hvec);
	insert(hvec, getSize(hvec), 999);
	print_vector(hvec);
}
