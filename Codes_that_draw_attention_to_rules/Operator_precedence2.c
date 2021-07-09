#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

int a[5] = {10, 20, 30, 40, 50};

int* func() {
	return a;
}

int main()
{
	++func()[2];
	display_array(a, 5); //prints 10 20 31 40 50
}
