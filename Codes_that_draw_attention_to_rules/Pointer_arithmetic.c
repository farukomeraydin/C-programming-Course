#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

//&a[0] ==> int* when incremented by 1 it will increment by sizeof(int)
//&a ==> int(*)[10] when incremented by 1 it will increment by sizeof(int)*10


int main()
{
	int a[4] = { 0, 1, 2, 3 };

	printf("%p\n", a);
	printf("%p\n", a+1);

	printf("\n");

	printf("%p\n", &a);
	printf("%p\n", &a + 1);
}
