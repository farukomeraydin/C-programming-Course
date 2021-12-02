#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int* ptr = (int[5]){ 1, 4, 5, 6, 7 };

	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", ptr[i]);
	}
}
