#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

void func() {
	enum {SIZE =  500};
	int a[SIZE] = { 0 };
}

int main(void)
{
	int a = SIZE; //Invalid, out of scope
}
