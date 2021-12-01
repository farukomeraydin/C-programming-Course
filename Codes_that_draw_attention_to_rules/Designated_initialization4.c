#define _CRT_SECURE_NO_WARNINGS
#include "Omer.h"

typedef struct Data {
	int x, y;
	double a[10];
	char str[20];
}Data;

int main()
{
	Data dx = { .y = 5, .a = {[4] = 5, [7] = 23} };
}
