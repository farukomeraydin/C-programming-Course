#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	void *vptr;
	int *ptr;

	printf("sizeof(int *) = %zu\n", sizeof(int *)); //8
	printf("sizeof(void *) = %zu\n", sizeof(void *)); //8
}
