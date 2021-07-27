#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int x = 20;
int y = 30;
int z = 50;

int main()
{
	double *p[] = { &x, &y, &z };
	printf("%zu\n", sizeof(p)); //24
	printf("%zu\n", sizeof(*p)); //8
	printf("%zu\n", sizeof(**p)); //8
}
