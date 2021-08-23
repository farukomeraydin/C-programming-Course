#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

void func() {
	static int a[] = { 1, 2, 3, 4, 5 };
	display_array(a, 5);
	
	for (int i = 0; i < 5; ++i)
		++a[i];
}

int main(void)
{
	for (int i = 0; i < 10; ++i) {
		func();
		_getch();
	}
}
