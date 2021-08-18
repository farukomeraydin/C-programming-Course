#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int func(int x, int y) {
	printf("func is called\n");

	return x * y;
}

int foo(int x, int y) {
	printf("foo is called\n");
	return x + y;
}

int main()
{
	int(*fp)(int, int) = func;
	//or int(*fp)(int, int) = &func;

	int x = fp(12, 45);
	printf("x = %d\n", x);
	fp = foo;
	int y = fp(12, 45);
	printf("y = %d\n", y);
}
