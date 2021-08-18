#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int a[10][20];

	printf("sizeof(a) = %zu\n", sizeof(a)); //800
	printf("sizeof(a[0]) = %zu\n", sizeof(a[0])); //80
	printf("sizeof(a[0][0]) = %zu\n", sizeof(a[0][0])); //4
	printf("size a = %zu\n", asize(a)); //10

}
