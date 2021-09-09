#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

struct Array {
	int a[10];
};

int main(void)
{
	struct Array x = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	struct Array y;
	y = x;
	display_array(y.a, 10);
}
