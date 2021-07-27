#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"


int x = 20;
int y = 30;
int z = 50;

int main()
{
	int *p[] = { &x, &y, &z };
	printf("size of p = %zu\n", asize(p));
	++*p[2];
	printf("z = %d\n", z);
}
