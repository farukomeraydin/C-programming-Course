#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int a[2] = { 2, 2 };
int b[3] = { 3, 3, 3 };
int c[4] = { 4, 4, 4, 4 };
int d[5] = { 5, 5, 5, 5, 5 };

int main()
{
	int const * p[] = { &a, &b, &c, &d };

	int x = 356;
	p[2] = &x;	//valid
	//*p[2] = 666;	//invalid
}
