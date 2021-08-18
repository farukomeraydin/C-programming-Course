#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int x = 10;
	int y = 20;
	int *ptr = &x;
	int **p = &ptr;

	printf("*ptr = %d\n", *ptr);
	*p = &y; //ptr = &y
	printf("*ptr = %d\n", *ptr);
}
