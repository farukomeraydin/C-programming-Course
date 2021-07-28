#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int a[5] = { 5, 5, 5, 5, 5 };
int b[4] = { 4, 4, 4, 4 };
int c[3] = { 3, 3, 3 };

int main()
{
	int* p[] = { a, b, c };
	++p[1]; //Increments the address

	++*p[1]; //Increments the value
	display_array(a, 5);
	display_array(b, 4); //4 5 4 4
	display_array(c, 3);
}
