#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int x = 10;
	int *ptr = &x;
	int **p = &ptr;

	printf("x    = %d\n", x);
	printf("&x    = %p\n", &x);
	printf("ptr    = %p\n", ptr);
	printf("&ptr    = %p\n", &ptr);
	printf("p    = %p\n", p);
}
