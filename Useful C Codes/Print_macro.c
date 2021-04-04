#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:6031)
#include "Omer.h"

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	iprint(a + b);
	iprint(a + b + c);
	iprint(a * a + b + c * c);
	iprint(5 * (a + b) - 3 * (b - c));

}
