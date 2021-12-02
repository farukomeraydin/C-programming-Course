#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


void func(const int* ptr, size_t size) {
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", ptr[i]);
	}
	printf("\n");
}

int main()
{
	//3, 5, 7, 8, 45, 56
	func((int[7]) { 3, 5, 7, 8, 45, 56, 12 }, 7);
}
