#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int a[] = { 1, 3, 7, 9, 4 };
	int *ptr = a;
	int **p = &ptr;

	printf("*p = %p\n", *p);
	printf("**p = %d\n", **p);

	++*p;
	++**p;

	printf("*p = %p\n", *p);
	printf("**p = %d\n", **p);


	display_array(a, asize(a));
}
