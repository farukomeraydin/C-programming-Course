#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define swap(x,y) {int temp = x; x = y; y = temp;}

int main()
{
	int a = 10, b = 20;
	swap(a, b)
	printf("a = %d and b = %d\n", a, b);
}
