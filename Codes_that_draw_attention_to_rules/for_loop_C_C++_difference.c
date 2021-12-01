#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int main()
{
	for (int i = 0; i < 10; ++i) {
		int i = 20; //In C++ error, in C, name hiding
		printf("%d ", i);
	}
	printf("\n");
}
