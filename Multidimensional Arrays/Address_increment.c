#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int main()
{
	int a[64] = { 0 };

	printf("%p  %p\n", a, a + 1); //Increments by 4
	printf("%p  %p\n", &a, &a + 1); //Increments by 256
}
