#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int x) {
	int a[x];

	int(*p)[x] = &a;

	for (int i = 0; i < x; ++i) {
		(*p)[i] = i;
		printf("%d ", (*p)[i]);
	}
}

int main()
{
	func(10);
}
