#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int a[10][64];
	int(*ptr)[64] = a;

	for (int i = 0; i < 10; ++i)
		printf("%p %p %p\n", a + i, &a[i], ptr++);
}
