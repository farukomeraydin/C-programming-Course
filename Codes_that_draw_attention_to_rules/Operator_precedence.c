#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

#define SIZE	20

void foo(int* p, int size) {
	while (size--)
		++*p++;
}

int main()
{
	int a[SIZE] = { 0 };
	foo(a, SIZE); //Increments every element of the array
	display_array(a, SIZE);
}
